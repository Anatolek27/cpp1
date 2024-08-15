/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:57:38 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 22:45:19 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    pv = 100;
    nrg = 50;
    dmg = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : ClapTrap() {
    name = newName;
    pv = 100;
    nrg = 50;
    dmg = 20;
    std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    pv = 100;
    nrg = 50;
    dmg = 20;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
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