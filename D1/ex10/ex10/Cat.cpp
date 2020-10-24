//
// Created by Mostafa Oraei on 10/24/20.
//

#include "Cat.h"
#include <fstream>
#include <iostream>

std::string Cat::ReadFile(const char * filename) {
    std::string tmp;
    std::ifstream myFile;
    myFile.open(filename);
    while (myFile >> tmp) {
        files += tmp;
    }
    return files;
}

void Cat::WriteFile(const std::string &destination) const {
    std::ofstream myFile;
    myFile.open(destination);
    myFile << files;
    myFile.close();
}

void Cat::printInConsole() const {
    std::cout << files;
}
