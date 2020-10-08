//
// Created by Mostafa Oraei on 10/8/20.
//

#include "Contact.h"
#include <iomanip>

void Contact::Add(void) {
    std::cout << std::endl << "Enter first name: ";
    std::cin >> first_name_;
    std::cout  << std::endl << "Enter last name: ";
    std::cin >> last_name_;
    std::cout  << std::endl << "Enter nick name: ";
    std::cin >> nick_name_;
    std::cout  << std::endl << "Enter login: ";
    std::cin >> login_;
    std::cout  << std::endl << "Enter postal address: ";
    std::cin >> postal_address_;
    std::cout  << std::endl << "Enter email address: ";
    std::cin >> email_address_;
    std::cout  << std::endl << "Enter phone number: ";
    std::cin >> phone_number_;
    std::cout  << std::endl << "Enter birthday: ";
    std::cin >> birthday_;
    std::cout  << std::endl << "Enter favorite meal: ";
    std::cin >> favorite_meal_;
    std::cout  << std::endl << "Enter underwear color: ";
    std::cin >> underwear_color_;
    std::cout  << std::endl << "Enter dark secret: ";
    std::cin >> darkest_secret_;
}

void Contact::Show() {
    std::string fn = first_name_;
    std::string ln = last_name_;
    std::string nn = nick_name_;

    (fn.size()>10) ? fn.replace(9, fn.size(), ".") : fn;
    (ln.size()>10) ? ln.replace(9, ln.size(), ".") : ln;
    (nn.size()>10) ? nn.replace(9, nn.size(), ".") : nn;

    std::cout << std::setw(10) << fn << "|";
    std::cout << std::setw(10) << ln << "|";
    std::cout << std::setw(10) << nn << std::endl;
}

void Contact::Search() {
    std::cout << first_name_ << std::endl;
    std::cout << last_name_ << std::endl;
    std::cout << nick_name_ << std::endl;
    std::cout << login_ << std::endl;
    std::cout << postal_address_ << std::endl;
    std::cout << email_address_ << std::endl;
    std::cout << phone_number_ << std::endl;
    std::cout << birthday_ << std::endl;
    std::cout << favorite_meal_ << std::endl;
    std::cout << underwear_color_ << std::endl;
    std::cout << darkest_secret_ << std::endl;
}