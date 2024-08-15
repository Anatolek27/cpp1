/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:06:25 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 23:13:39 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap John;
    FragTrap Jack("Jack");
    std::cout << Jack.getPv() << std::endl;
    John.highFiveGuys();
    return (0);
}