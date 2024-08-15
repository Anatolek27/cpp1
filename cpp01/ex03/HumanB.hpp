/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:43:11 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 14:19:52 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB {
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string newName);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &newWeapon);
};

#endif