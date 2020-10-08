#include <iostream>
#include "Contact.h"
#include <iomanip>

int get_command(std::string &input);

int main() {
    std::string input{};

    return get_command(input);
}

int get_command(std::string &input) {
    Contact contacts[8];
    int num_contact{0};
    while (true) {
        std::cout << "Enter command: ";
        std::cin >> input;
        if (input != "exit") {
            if (input == "add") {
                if (num_contact >= 8) {
                    std::cout << "Contacts are Full!!";
                } else {
                    contacts[num_contact].Add();
                    num_contact++;
                }

            } else if (input == "search") {
                for (int i = 0; i < num_contact; ++i) {
                    std::cout << std::setw(10) << i << "|";
                    contacts[i].Show();
                }
                std::cout << std::endl << "Enter your desire index: ";
                int selected_index = 9;
                std::cin >> selected_index;
                if (selected_index >= 0 & selected_index <= num_contact) {
                    contacts[selected_index].Search();
                } else {
                    std::cout << std::endl << "Not in Contacts range!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
                }

            } else {
                std::cout << "Try again!!! " << std::endl;
            }
        } else {
            exit(101);
        }
    }
}
