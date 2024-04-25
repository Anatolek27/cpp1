#include "phonebook.hpp"

void	putst(std::string temp)
{
	std::cout << " | ";
	if (temp.size() > 10)
	{
		temp.resize(9);
		std::cout << temp;
		std::cout << ".";
	}
	else
		std::cout << temp;
}

int main(void) {
    PhoneBook PhoneB;
    int selector = 0;
    PhoneB.number = 0;
    while (true){
        std::string command;
        std::cout  << "Entrez une commande (ADD, SEARCH ou EXIT) : ";
        std::cin >> command;

        if (command == "ADD") {
            PhoneB.addContact();
        } else if (command == "SEARCH") {
            for (int i = 0; i < PhoneB.number; i++)
			{
				std::string temp;
				std::cout << i + 1;
				putst(PhoneB.contacts[i].firstname);
				putst(PhoneB.contacts[i].lastname);
				putst(PhoneB.contacts[i].nickname);
				putst(PhoneB.contacts[i].phone);
				putst(PhoneB.contacts[i].secret);
				std::cout << " | " << std::endl;
			}

			std::cin >> selector;
			selector--;
			system("clear");

			if (selector < PhoneB.number || selector < 0)
			{
				std::cout << PhoneB.contacts[selector].firstname << std::endl;
				std::cout << PhoneB.contacts[selector].lastname << std::endl;
				std::cout << PhoneB.contacts[selector].nickname << std::endl;
				std::cout << PhoneB.contacts[selector].phone << std::endl;
				std::cout << PhoneB.contacts[selector].secret << std::endl;
			}
			else
			{
				std::cout << "invalid" << std::endl;
				command = "1";
			}
			while (1)
			{
				std::cout << "Type BACK to go back" << std::endl;
				std::cin >> command;
				if (command == "BACK")
					break ;
			}
        } else if (command == "EXIT") {
            std::cout << "Au revoir !" << std::endl;
            exit (0);
        } else {
            std::cout << "Commande non reconnue." << std::endl;
        }
    }
    return (0);
}
