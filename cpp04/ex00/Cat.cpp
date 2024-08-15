/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:40:40 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:31:58 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
}

Cat::Cat(Cat& c) {
    this->type = c.getType();
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(Cat& other) {
    this->type = other.type;
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeNoise() {
    std::cout << "Meeeeowwww" << std::endl;
}

std::string Cat::getType() {
    return (this->type);
}