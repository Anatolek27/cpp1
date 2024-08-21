/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:55:58 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/20 16:50:56 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# pragma once

#include <string>

class Contact {
    private:
	    std::string _firstname;
    	std::string _lastname;
    	std::string _nickname;
    	std::string _phone;
		std::string _secret;
	public:
		Contact();
		std::string getFirstname();
		void setFirstname(std::string fname);
		std::string getLastname();
		void setLastname(std::string lname);
		std::string getNickname();
		void setNickname(std::string nname);
		std::string getPhone();
		void setPhone(std::string phone);
    	std::string getSecret();
		void setSecret(std::string secret);
};

#endif