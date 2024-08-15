/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:34:12 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 13:04:03 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA {
  private:
    std::string name;
    Weapon &weapon;
  public:
    HumanA(std::string newName, Weapon &newWeapon);
    ~HumanA();
    void attack();
};

#endif