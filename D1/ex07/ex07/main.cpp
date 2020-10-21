#include <iostream>
#include <fstream>
#include <string>


int writeFile(const std::string& filename, const std::string& s1, std::string s2) {
    std::ofstream myFile;
    myFile.open(filename);
    myFile << s1 << std::endl;
    myFile << s2 << std::endl;
    myFile.close();
    return 1;
}

int readFile(const std::string& filename) {
    std::string data;
    std::string tmp;
    std::ifstream myFile;
    myFile.open(filename);
    if (!myFile) {
        std::cerr << "can't open file";
        exit(22);
    }
    std::cout <<  "Reading file: " << std::endl;
    while (myFile >> tmp) {
        data = data + '\n' + tmp;
    }
    std::cout << data << std::endl;
    myFile.close();
    return 2;
}

int main() {

    std::string filename;
    std::string s1;
    std::string s2;

    while (filename.empty()) {
        std::cout << "input file name: ";
        std::cin >> filename;
    }
    while (s1.empty()) {
        std::cout << "input s1: ";
        getline(std::cin, s1);
    }
    while (s2.empty()) {
        std::cout << "input s2: ";
        getline(std::cin, s2);
    }

    writeFile(filename, s1, s2);
    readFile(filename);
}
