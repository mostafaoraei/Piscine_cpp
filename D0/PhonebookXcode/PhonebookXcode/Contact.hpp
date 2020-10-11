//
//  Contact.hpp
//  PhonebookXcode
//
//  Created by Saeed Rajabalizade on 10/10/20.
//  Copyright © 2020 Saeed Rajabalizade. All rights reserved.
//

#ifndef Contact_hpp
#define Contact_hpp

#include <stdio.h>
#include <iostream>

#endif /* Contact_hpp */

class Contact{

public:
    Contact();
    void add();
    void print();
    
private:
    std::string name;
    std::string lastName;
    std::string middleName;
    std::string number;
    std::string birthday;
};
