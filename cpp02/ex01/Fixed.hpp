/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:28:08 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:23:52 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
       int value;
       static const int fractionalBits = 8;

    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed(const int raw);
        Fixed(const float raw);
        ~Fixed();
        Fixed& operator=(const Fixed& other);
        int getRawBits() const;
        void setRawBits(int raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif