/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:14:00 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 12:18:28 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl harl;
    
    std::cout << "DEBUG: ";
    harl.complain("DEBUG");
    std::cout << std::endl;
    std::cout << "INFO: ";
    harl.complain("INFO");
    std::cout << std::endl;
    std::cout << "WARNING: ";
    harl.complain("WARNING");    
    std::cout << std::endl;
    std::cout << "ERROR: ";
    harl.complain("ERROR");
    return 0;

}