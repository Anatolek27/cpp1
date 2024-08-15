/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:02:09 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 12:13:43 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    
}

Harl::~Harl(void) {
    
}

void Harl::hdebug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::hinfo(void) {
    	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::hwarning(void) {
    	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::herror(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    Harl harl;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fptr[4])() = {&Harl::hdebug, &Harl::hinfo, &Harl::hwarning, &Harl::herror};

    for (int i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            (this->*fptr[i])();
            return;
        }
    }
    std::cout << "Not a level" << std::endl;
}
