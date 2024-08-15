/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:46:32 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:35:53 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Dog.hpp"

 Dog::Dog() {
    this->type = "Dog";
 }
 
 Dog::Dog(Dog& d) {
    this->type = d.getType();
    std::cout << "Dog constructor called" << std::endl;
 }

Dog& Dog::operator=(Dog& other) {
    this->type = other.type;
    return (*this);
}
Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeNoise() {
    std::cout << "Bark Bark" << std::endl;
}

const std::string Dog::getType() {
    return(this->type);
}