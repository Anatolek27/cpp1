/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:23:37 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/07 14:31:22 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public Animal {
    private:
        std::string type;
    public:
        WrongCat();
        WrongCat(WrongCat &d);
        WrongCat& operator=(WrongCat& other);
        ~WrongCat();
        void getType(void);
};

#endif