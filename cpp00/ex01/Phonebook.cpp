/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:48:03 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 11:48:03 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : number(0), max(0) {}

void PhoneBook::addContact() {
    Contact newContact;
    if (number == 8) {
        max = 1;
        number = 0;
    }
    do {
        std::cout << "Entrez le prénom: ";
        std::cin >> newContact.firstname;
    } while (newContact.firstname.empty());
    do {
        std::cout << "Entrez le nom de famille: ";
        std::cin >> newContact.lastname;
    } while (newContact.lastname.empty());
    do {
           std::cout << "Entrez le surnom: ";
        std::cin >> newContact.nickname;
    } while (newContact.nickname.empty());
    do {
        std::cout << "Entrez le numéro de téléphone: ";
        std::cin >> newContact.phone;
    } while (newContact.phone.empty());
    std::cin.ignore();
    do {
        std::cout << "Entrez le secret: ";
        std::getline(std::cin, newContact.secret);
    } while (newContact.secret.empty());
    contacts[number] = newContact;
    number++;
}