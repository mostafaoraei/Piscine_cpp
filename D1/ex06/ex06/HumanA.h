//
// Created by Mostafa Oraei on 10/21/20.
//

#ifndef EX06_HUMANA_H
#define EX06_HUMANA_H

#include <string>
#include "Weapon.h"

class HumanA {
    std::string _name;
    Weapon *_weapon ;
public:
    ~HumanA();
    HumanA(std::string name, Weapon& weapon);
    void attack();
};



#endif //EX06_HUMANA_H
