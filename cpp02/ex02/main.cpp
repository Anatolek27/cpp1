/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:46:31 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:16:35 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main() {
    Fixed a;
    Fixed b(10);
    Fixed c(42.42f);
    Fixed d(b);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    std::cout << "a + b is " << (a + b) << std::endl;
    std::cout << "b - a is " << (b - a) << std::endl;
    std::cout << "a * b is " << (a * b) << std::endl;
    std::cout << "c / b is " << (c / b) << std::endl;

    std::cout << "a > b is " << (a > b) << std::endl;
    std::cout << "a < b is " << (a < b) << std::endl;
    std::cout << "a >= b is " << (a >= b) << std::endl;
    std::cout << "a <= b is " << (a <= b) << std::endl;
    std::cout << "a == b is " << (a == b) << std::endl;
    std::cout << "a != b is " << (a != b) << std::endl;

    std::cout << "Pre-increment a: " << ++a << std::endl;
    std::cout << "Post-increment a: " << a++ << std::endl;
    std::cout << "a after post-increment: " << a << std::endl;

    std::cout << "Pre-decrement a: " << --a << std::endl;
    std::cout << "Post-decrement a: " << a-- << std::endl;
    std::cout << "a after post-decrement: " << a << std::endl;

    std::cout << "Min between b and c: " << Fixed::min(b, c) << std::endl;
    std::cout << "Max between b and c: " << Fixed::max(b, c) << std::endl;

    return 0;
}