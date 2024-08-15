/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:47:53 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 11:47:53 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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

    while (1) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            phoneBook.addContact();
            system("clear");
        } else if (command == "SEARCH") {
            if (phoneBook.max == 1) {
                for (int i = 0; i < 8; i++) {
                    std::cout << i + 1;
                    std::cout << " |";
                    std::cout << std::setw(10) << truncate(phoneBook.contacts[i].firstname, 10);
                    std::cout << " | ";
                    std::cout << std::setw(10) << truncate(phoneBook.contacts[i].lastname, 10);
                    std::cout << " | ";
                    std::cout << std::setw(10) << truncate(phoneBook.contacts[i].nickname, 10) << std::endl;
                    lindex = 9;
                }
            } else {
                for (int i = 0; i < phoneBook.number; i++) {
                    std::cout << i + 1;
                    std::cout << " | ";
                    std::cout << std::setw(10) << truncate(phoneBook.contacts[i].firstname, 10);
                    std::cout << " | ";
                    std::cout << std::setw(10) << truncate(phoneBook.contacts[i].lastname, 10);
                    std::cout << " | ";
                    std::cout << std::setw(10) << truncate(phoneBook.contacts[i].nickname, 10) << std::endl;
                    lindex = i + 1;
                }
            }
            while (1) {
				std::cin >> sel;
				if (sel.size() == 1 && sel[0] > '0' && sel[0] < '9') {
                    if (phoneBook.max == 1) {
					    break;
                    } else {
                        if (sel[0] < phoneBook.number + 49) {
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
				std::cout << "First Name : " << phoneBook.contacts[selector].firstname << std::endl;
				std::cout << "Last Name : " << phoneBook.contacts[selector].lastname << std::endl;
				std::cout << "Nickname : " << phoneBook.contacts[selector].nickname << std::endl;
				std::cout << "Phone Number : " << phoneBook.contacts[selector].phone << std::endl;
				std::cout << "Darkest Secret : " << phoneBook.contacts[selector].secret << std::endl;
                command = "";
                while (command != "BACK") {
                    std::getline(std::cin, command);
                    std::cout << "Type BACK to go back" << std::endl;
                }
                system("clear");
			}
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Unknown command. Please try again." << std::endl;
        }
    }
    return 0;
}