//
// Created by Mostafa Oraei on 10/21/20.
//

#include "HumanA.h"
#include <iostream>

void HumanA::attack() {
    std::cout << _name << " attack with his " << _weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) {
    this->_name = name;
    this->_weapon = &weapon;
}

HumanA::~HumanA() {
//    delete _weapon;
}
