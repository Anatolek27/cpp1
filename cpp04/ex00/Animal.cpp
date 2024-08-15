/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:32:50 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:35:14 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal &other) {
    type = other.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(Animal& other) {
    this->type = other.type;
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() {
    std::cout << "Real animal sound..." << std::endl;
}

const std::string Animal::getType(void) {
    return (this->type);
}