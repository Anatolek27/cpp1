/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:48:03 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/20 14:37:36 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : _number(0), _max(0) {}

Contact *PhoneBook::getContact() {
    return (_contacts);
}

int PhoneBook::getMax() {
    return(_max);
}

int PhoneBook::getNumber() {
    return(_number);
}

void PhoneBook::addContact() {
    Contact newContact;
    std::string input;
    
    if (getNumber() == 8) {
        _max = 8;
        _number = 0;
    }
    do {
        std::cout << "Entrez le prénom: ";
        std::cin >> input;
        newContact.setFirstname(input);
    } while (newContact.getFirstname().empty());
    do {
        std::cout << "Entrez le nom de famille: ";
        std::cin >> input;
        newContact.setLastname(input);
    } while (newContact.getLastname().empty());
    do {
        std::cout << "Entrez le surnom: ";
        std::cin >> input;
        newContact.setNickname(input);
    } while (newContact.getNickname().empty());
    do {
        std::cout << "Entrez le numéro de téléphone: ";
        std::cin >> input;
        newContact.setPhone(input);
    } while (newContact.getPhone().empty());
    std::cin.ignore();
    do {
        std::cout << "Entrez le secret: ";
        std::cin >> input;
        newContact.setSecret(input);
    } while (newContact.getSecret().empty());
    getContact()[_number] = newContact;
    _number++;
}
