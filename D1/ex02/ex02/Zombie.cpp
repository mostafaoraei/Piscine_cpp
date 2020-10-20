//
// Created by Mostafa Oraei on 10/20/20.
//

#include "Zombie.h"
#include <iostream>

void Zombie::announce() {
    std::cout << name << "  (" << type << ") "<< " Braiiiiiinnnnnsssss....." << std::endl;
}

Zombie::Zombie(int type, std::string name) {
    this->name = name;
    this->type = type;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

void Zombie::setType(int type) {
    this->type = type;
}

Zombie::Zombie() {
}

Zombie::~Zombie() {
    std::cout << name << " zombie are dead!"<< std::endl;
}
