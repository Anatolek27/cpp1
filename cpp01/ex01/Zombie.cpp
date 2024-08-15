/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:20:58 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 14:43:10 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

Zombie::Zombie() {
    
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    
}

void Zombie::announce() {
    std::cout << this->name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

