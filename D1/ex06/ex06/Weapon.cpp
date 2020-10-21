//
// Created by Mostafa Oraei on 10/21/20.
//

#include "Weapon.h"

const std::string &Weapon::getType() {
    return _type;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}

Weapon::Weapon(std::string type) {
    Weapon::setType(type);
}

Weapon::Weapon() {

}
