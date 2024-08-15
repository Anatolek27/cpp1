/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:06:25 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 17:56:21 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp" 

int main(void){
    ClapTrap first;
    ClapTrap second("second");
    ClapTrap cpy_sec(second);
    ClapTrap third("third");
    second.attack("fourth");
    third.takeDamage(5);
    std::cout << "third has " << third.getPv() << " pv left" << std::endl;
    third.takeDamage(15);
    std::cout << "third has " << third.getPv() << " pv left" << std::endl;
    second.takeDamage(7);
    std::cout << "second has " << second.getPv() << " pv left" << std::endl;
    second.beRepaired(5);
    std::cout << "second has " << second.getPv() << " pv left" << std::endl;
    second.takeDamage(7);
    std::cout << "second has " << second.getPv() << " pv left" << std::endl;
    for (int i = 0; i < 10; i++) {
        second.attack("Jack");
    }
    return (0);
}