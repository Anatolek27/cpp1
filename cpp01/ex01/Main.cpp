/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:30:39 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 14:41:25 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie *zHorde;

    zHorde = zombieHorde(20, "Zombie");
    for (int i = 0; i < 20; i++) {
        zHorde[i].announce();
    }
    
    delete zHorde;
}