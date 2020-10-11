//
//  Contact.cpp
//  PhonebookXcode
//
//  Created by Saeed Rajabalizade on 10/10/20.
//  Copyright © 2020 Saeed Rajabalizade. All rights reserved.
//

#include "iostream"
#include "Contact.hpp"

void Contact:: add(){
    
    std:: cout<< "\n First Name:";
    std:: cin>> this->name;
    std:: cout<< "\n" << "Last Name:";
    std:: cin>> this->lastName;
    std:: cout<< "\n Middle Name:";
    std:: cin>> this->middleName;
    std:: cout<< "\n Birthday";
    std:: cin>> this->birthday;
}

void Contact:: print(){
    
    std::cout<< "name:" << name << "\n";
}
