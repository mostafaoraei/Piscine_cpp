//
// Created by Mostafa Oraei on 10/20/20.
//

#include "ZombieEvent.h"
#include <random>
#include <vector>
#include <iostream>

Zombie ZombieEvent::setZombieType(int type) {
    Zombie *z = new Zombie("unknown");
    z->setType(type);
    delete z;
    return *z;
}

Zombie ZombieEvent::randomChump() {
    std::string names[] = {"mostafa", "ali", "hassan", "dad"};
    size_t size_names = sizeof(names) / sizeof(std::string);
    int r = std::rand() % (size_names + 1);
    std::cout << "random number is:" << r << std::endl;
    std::cout << "sizeof(names) is:" << sizeof(names) << std::endl;
    std::cout << "sizeof(std::string) is:" << sizeof(std::string) << std::endl;
    Zombie z(names[r]);
    z.announce();
    return z;
}