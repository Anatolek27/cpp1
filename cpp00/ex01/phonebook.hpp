/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:48:06 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 11:48:07 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>

class Contact {
    public:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone;
    std::string secret;
};

class PhoneBook{
    public:
        Contact contacts[8];
        int number;
        int max;
    PhoneBook();
    void addContact();
};

#endif