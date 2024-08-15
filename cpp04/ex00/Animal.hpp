/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:20:27 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:35:19 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal& a);
        Animal& operator=(Animal& other);
        ~Animal();
        const std::string getType(void);
        void makeSound();
};

#endif