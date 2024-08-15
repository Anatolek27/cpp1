/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:06:23 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 23:17:26 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "FragTrap.hpp"

ClapTrap::ClapTrap() {
    name = "";
    pv = 10;
    nrg = 10;
    dmg = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName, int pvs, int nrgy, int damg) : name(newName), pv(pvs), nrg(nrgy), dmg(damg) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : name(newName), pv(10), nrg(10), dmg(0) {
    std::cout << "Name constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    name = other.name;
    std::cout << "ClapTrap Copy assignment constructor called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (pv <= 0) {
        std::cout << name << " is already dead" << std::endl;
    }
    else if (nrg >= 1) {
        std::cout << name << " attacks " << target << " and deals " << dmg << " damage" << std::endl;
        nrg--;
    } else {
        std::cout << "No energy to attack" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (pv <= 0) {
        std::cout << name << " is already dead" << std::endl;
    } else {
        std::cout << name << " takes " << amount << " damage" << std::endl;
        pv = pv - amount;
    }
    if (pv <= 0) {
        std::cout << name << " is dead" << std::endl; 
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (pv <= 0) {
        std::cout << name << " is already dead" << std::endl;
    } else if (nrg >= 1) {
        std::cout  << name << " gains " << amount << " pv" << std::endl;
        pv = pv + amount;
    }
    if (pv <= 0) {
        std::cout << name << " is dead" << std::endl;
    }
}

int ClapTrap::getPv() {
    return (this->pv);
}