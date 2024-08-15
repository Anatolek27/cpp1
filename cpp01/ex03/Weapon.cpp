/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:27:08 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 12:57:36 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    
}

Weapon::Weapon(std::string newType) {
    setType(newType);
}

Weapon::~Weapon() {
    
}

const std::string Weapon::getType() {
    return(type);
}

void Weapon::setType(std::string newType) {
    type = newType;
}