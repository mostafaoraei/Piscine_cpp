//
// Created by Mostafa Oraei on 10/21/20.
//

#ifndef EX06_HUMANB_H
#define EX06_HUMANB_H

#include <string>
#include "Weapon.h"

class HumanB {
    std::string _name;
    Weapon* _weapon;

public:
    explicit HumanB(std::string name);
    HumanB(std::string name, Weapon& weapon);
    void attack();
    void setWeapon(Weapon& weapon);
};


#endif //EX06_HUMANB_H
