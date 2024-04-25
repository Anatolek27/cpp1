#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include <cstdlib>

class Contact {
    public:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone;
    std::string secret;

    void    display(void){
        std::cout << firstname;
        std::cout << " : ";
        std::cout << phone << std::endl;
    }
};

class PhoneBook{
    public:
    Contact contacts[8];
    int number;

    void addContact() {
        Contact newContact;
        if (number == 8) {
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
    void searchContact() const {
    }
};

#endif