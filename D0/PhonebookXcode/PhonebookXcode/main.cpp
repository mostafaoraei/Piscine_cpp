//
//  main.cpp
//  PhonebookXcode
//
//  Created by Saeed Rajabalizade on 10/10/20.
//  Copyright © 2020 Saeed Rajabalizade. All rights reserved.
//

#include <iostream>
#include "Contact.hpp"

int main(int argc, const char * argv[]) {
    
    std::string add = "ADD";
    std::string search = "SEARCH";
    std::string exit = "EXIT";
    std::string input = "";
    Contact phoneBook[8];
    int coutOfContact = 0;
    std::cout<< "Hello Boss!\n" << "You can use \""<< add<< "\", \""<< exit<< "\" and \""<< search<< "\".\n";
    while (input != exit) {
        
        std::cout<< "Enter your command:\n";
        std::cin >> input;
        if (input == add && coutOfContact < 8){
        
            Contact temp = Contact();
            temp.add();
            phoneBook[coutOfContact] = temp;
            coutOfContact++;
            std::cout<< "\n"<< "your contact added" << "\n";
        }else if (input == search){
            
            std::cout<< search<< "\n";
            
        }else if (input == exit){
            
            std::cout<< "Bye\n";
            
        }else if (input == "PRINT"){
            
            for (int i = 0; i < coutOfContact; i++){
                
                phoneBook[i].print();
            }
        }else{
            
            std::cout<< "Wrong!!!\n";
        }
    }
    return 0;
}

