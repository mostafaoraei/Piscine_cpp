//
//  main.cpp
//  PhonebookXcode
//
//  Created by Saeed Rajabalizade on 10/10/20.
//  Copyright © 2020 Saeed Rajabalizade. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::string add = "ADD";
    std::string search = "SEARCH";
    std::string exit = "EXIT";
    std::string input = "";
    std::string phoneBook[8][2];
    int coutOfContact = 0;
    std::cout<< "Hello Boss!\n" << "You can use \""<< add<< "\", \""<< exit<< "\" and \""<< search<< "\".\n";
    while (input != exit) {
        
        std::cout<< "Enter your command:\n";
        std::cin >> input;
        if (input == add && coutOfContact < 8){
        
            char name[100];
            std::string number = "";
            std::cout<< "Please Add Name(limit 100 charachter):";
            
            std::cin>>name;
            std::cout<< "\n"<< "Please Add Number:";
            std::cin>> number;
            phoneBook[coutOfContact][0] = name;
            phoneBook[coutOfContact][1] = number;
            coutOfContact++;
            std::cout<< "\n"<< "your contact added" << "\n";
        }else if (input == search){
            
            std::cout<< search<< "\n";
            
        }else if (input == exit){
            
            std::cout<< "Bye\n";
            
        }else if (input == "PRINT"){
            
            for (int i = 0; i < coutOfContact; i++){
                
                std::cout<< phoneBook[i][0] << ":"<< phoneBook[i][1]<< "\n";
            }
        }else{
            
            std::cout<< "Wrong!!!\n";
        }
    }
    return 0;
}

