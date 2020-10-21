//
// Created by Mostafa Oraei on 10/21/20.
//

#include "HumanB.h"
#include <iostream>

void HumanB::attack() {
    std::cout << _name << " attack with his " << _weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name, Weapon& weapon) {
    this->_name = name;
    this->_weapon = &weapon;
}

HumanB::HumanB(std::string name) {
    this->_name = name;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}
