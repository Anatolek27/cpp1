/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:06:25 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 22:43:05 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap John;
    ScavTrap Jack("Jack");
    ScavTrap Jacko("Jacko");
    ClapTrap Fred("Fred");
    std::cout << Fred.getPv() << std::endl;
    std::cout << John.getPv() << std::endl;
    std::cout << Jack.getPv() << std::endl;
    Jack.takeDamage(40);
    std::cout << Jack.getPv() << std::endl;
    Jack.takeDamage(100);
    std::cout << Jack.getPv() << std::endl;
    std::cout << Jacko.getPv() << std::endl;
    Jacko.beRepaired(200);
    std::cout << Jacko.getPv() << std::endl;
    Jacko.attack("Bob");
    Fred.attack("Jacko");
    for (int i = 0; i < 10; i++) {
        Jacko.attack("Bob");
    }
    return (0);
}