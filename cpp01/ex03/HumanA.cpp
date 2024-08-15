/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:37:24 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 13:10:20 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon) : name(newName), weapon(newWeapon) {
    
}

HumanA::~HumanA() {
    
}

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}