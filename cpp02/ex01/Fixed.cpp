/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:23:10 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:24:12 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "cmath"

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : value(other.value) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int raw) {
    value = raw << fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float raw) {
    value = static_cast<int>(raw *(1 << fractionalBits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    value = other.value;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const {
    return (static_cast<float>(value) / (1 << fractionalBits));
}

int Fixed::toInt(void) const {
    return (value >> fractionalBits);
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

void Fixed::setRawBits(int raw) {
    value = raw;
}
