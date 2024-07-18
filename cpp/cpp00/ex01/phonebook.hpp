#include <string>
#include <iostream>
class Contact {
	private:
		std::string FN;
		std::string LN;
		std::string SN;
		std::string PNB;
		std::string DS;
	public:
		void setFirstName(const std::string& fn);
	    void setLastName(const std::string& ln);
	    void setNickname(const std::string& sn);
	    void setPhoneNumber(const std::string& pnb);
	    void setDarkestSecret(const std::string& ds);

 		std::string getFirstName() const;
 		std::string getLastName() const;
  		std::string getNickname() const;
 		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;

    	void displayContact() const;
};

class PhoneBook {
	private:
		Contact contact[8];
		int	count;
	public:
		void addContact(Contact &newContact);
		void displayContacts() const;
};