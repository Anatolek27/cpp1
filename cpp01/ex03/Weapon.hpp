/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:24:40 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 12:57:28 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string newType);
        Weapon();
        ~Weapon();
        const std::string getType();
        void setType(std::string newType);

};

#endif