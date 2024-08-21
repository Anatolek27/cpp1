/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:48:06 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/20 16:44:40 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# pragma once

# include <string>
# include <iostream>
# include <istream>
# include <cstdlib>
# include <iomanip>
# include "Contact.hpp"

class Contact;
class PhoneBook{
    private:
        Contact _contacts[8];
        int _number;
        int _max;
    public:
        PhoneBook();
        int getMax();
        int getNumber();
        Contact *getContact();
        void addContact();
};

#endif