/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:53:42 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 15:08:15 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cout << "Could not open the file " << std::endl;
        return;
    }
    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile.is_open()) {
        std::cout << "Error creating file" << std::endl;
        return;
    } 
    std::string line;
    while (std::getline(inputFile, line)) {
    std::string result;
    std::string::size_type pos = 0;
    std::string::size_type lastPos = 0;

    while ((pos = line.find(s1, lastPos)) != std::string::npos) {
        result += line.substr(lastPos, pos - lastPos);
        result += s2;
        lastPos = pos + s1.length();
    }

    result += line.substr(lastPos);
    outputFile << result << '\n';
    }

    inputFile.close();
    outputFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cout << "Waiting for 3 arguments" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cout << "Cannot replace nothing" << std::endl;
        return 1;
    }

    replaceInFile(filename, s1, s2);

    return 0;
}