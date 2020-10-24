//
// Created by Mostafa Oraei on 10/24/20.
//

#ifndef EX10_CAT_H
#define EX10_CAT_H

#include <string>

class Cat {
public:
    std::string files;
    std::string ReadFile(const char * filename);
    void WriteFile(const std::string & destination) const;
    void printInConsole() const;

};


#endif //EX10_CAT_H
