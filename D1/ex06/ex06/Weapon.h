//
// Created by Mostafa Oraei on 10/21/20.
//

#ifndef EX06_WEAPON_H
#define EX06_WEAPON_H

#include <string>

class Weapon {
    std::string _type;
public:
    Weapon();
    Weapon(std::string type);
    void setType(std::string type);
    const std::string& getType();
};


#endif //EX06_WEAPON_H
