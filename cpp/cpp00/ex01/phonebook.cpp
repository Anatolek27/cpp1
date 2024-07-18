#include "phonebook.hpp"

void addNewContact(PhoneBook &phonebook) {

}
int main(void) {
	PhoneBook phonebook;

	while (1) {
		std::string cmd;
		std::cout << "Enter command (SEARCH, ADD OR EXIT)" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD") {
			addNewContact(phonebook);
		} else if (cmd == "SEARCH") {
			phonebook.displayContacts();
		} else if (cmd == "EXIT") {
			return 0;
		} else {
			std::cout << "Command not found." << std::endl;
		}
	}
	return 0;
}