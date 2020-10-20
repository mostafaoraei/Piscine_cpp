//
// Created by Mostafa Oraei on 10/20/20.
//

#include <iostream>
#include "Zombie.h"

Zombie::Zombie(int type, std::string name) {
    this->type = type;
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << name << " has dead!" << std::endl;
}

void Zombie::announce() {
    std::cout << name << " are here! arghhhhhhhhhhhh!" << std::endl;
}

Zombie::Zombie() {

}

void Zombie::setName(std::string name) {
    this->name = name;
}
