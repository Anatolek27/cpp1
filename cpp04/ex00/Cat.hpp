/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:23:37 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:30:57 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    private:
        std::string _type;
    public:
        Cat();
        Cat(Cat &d);
        Cat& operator=(Cat& other);
        ~Cat();
        void makeNoise();
        std::string getType();
};

#endif