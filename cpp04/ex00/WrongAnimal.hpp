/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:23:37 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:31:17 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class WrongAnimal {
    private:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal &d);
        WrongAnimal& operator=(WrongAnimal& other);
        ~WrongAnimal();
        
        void makeNoise();
        std::string getType();
};

#endif