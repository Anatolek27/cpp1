/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:48:13 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 11:48:13 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]){
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else{
        for (int i = 1; i < argc; i++){
            for (int j = 0; argv[i][j]; j++)
                std::cout << (char)toupper(argv[i][j]);
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    return (0);
}
