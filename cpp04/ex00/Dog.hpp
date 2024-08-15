/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:23:37 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:35:59 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    private:
        std::string _type;
    public:
        Dog();
        Dog(Dog &d);
        Dog& operator=(Dog& other);
        ~Dog();
        void makeNoise();
        const std::string getType(void);
};

#endif