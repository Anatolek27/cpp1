/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:47:53 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/21 17:50:15 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string truncate(const std::string &str, std::size_t width) {
    if (str.length() > width)
        return str.substr(0, width - 1) + ".";
    return str;
}

int main(void) {
    PhoneBook phoneBook;
    std::string command;
    int selector = 0;
    int lindex = 0;
	std::string sel;
    int verif = 0;

    while (1) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        std::cout << std::endl;
        if (command == "ADD") {
            phoneBook.addContact();
            verif = 1;
            system("clear");
        } else if (command == "SEARCH" && verif == 1) {
            if (phoneBook.getMax() == 8) {
                for (int i = 0; i < 8; i++) {
                    std::cout << i + 1;
                    std::cout << " |";
                    std::cout << std::setw(10) << truncate(phoneBook.getContact()[i].getFirstname(), 10);
                    std::cout << " | ";
                    std::cout << std::setw(10) << truncate(phoneBook.getContact()[i].getLastname(), 10);
                    std::cout << " | ";
                    std::cout << std::setw(10) << truncate(phoneBook.getContact()[i].getNickname(), 10) << std::endl;
                    lindex = 9;
                }
		    std::cout << "Enter index from the list" << std::endl;
            } else {
                for (int i = 0; i < phoneBook.getNumber(); i++) {
                    std::cout << i + 1;
                    std::cout << " | ";
                    std::cout << std::setw(10) << truncate(phoneBook.getContact()[i].getFirstname(), 10);
                    std::cout << " | ";
                    std::cout << std::setw(10) << truncate(phoneBook.getContact()[i].getLastname(), 10);
                    std::cout << " | ";
                    std::cout << std::setw(10) << truncate(phoneBook.getContact()[i].getNickname(), 10) << std::endl;
                    lindex = i + 1;
                }
		std::cout << "Enter index from the list" << std::endl;
            }
            while (1) {
				std::cin >> sel;
				if (sel.size() == 1 && sel[0] > '0' && sel[0] < '9') {
                    if (phoneBook.getMax() == 1) {
					    break;
                    } else {
                        if (sel[0] < phoneBook.getNumber() + 49) {
                            break;
                        } else {
					        std::cout << "Input not an index" << std::endl;
			        	}
                    }
				}
				else {
					std::cout << "Input not an index" << std::endl;
				}
			}
			selector = sel[0] - 48;
			selector--;
			system("clear");
			if (selector < lindex)
			{
				std::cout << "First Name : " << phoneBook.getContact()[selector].getFirstname() << std::endl;
				std::cout << "Last Name : " << phoneBook.getContact()[selector].getLastname() << std::endl;
				std::cout << "Nickname : " << phoneBook.getContact()[selector].getNickname() << std::endl;
				std::cout << "Phone Number : " << phoneBook.getContact()[selector].getPhone() << std::endl;
				std::cout << "Darkest Secret : " << phoneBook.getContact()[selector].getSecret() << std::endl;
                command = "";
                while (command != "BACK") {
                    std::getline(std::cin, command);
                    std::cout << "Type BACK to go back" << std::endl;
                }
                system("clear");
			}
        } else if (command == "EXIT") {
            break;
        } else if (verif == 0) {
            std::cout << "Need at least one contact to search." << std::endl;
        } else {
            std::cout << "Unknown command. Please try again." << std::endl;
        }
    }
    return 0;
}
