//
// Created by Mostafa Oraei on 10/20/20.
//

#include <iostream>
#include <random>
#include "ZombieHorde.h"

ZombieHorde::~ZombieHorde() {
    delete[] zz;
    std::cout <<  "Zombies dead now!" << std::endl;
}

ZombieHorde::ZombieHorde(int n) {
    zz = new Zombie[n];
    for (int i = 0; i < n; ++i) {
        zz[i].setName(getRandomName());
        zz[i].announce();
    }
}

std::string ZombieHorde::getRandomName() {
    std::string names[] = {"mostafa", "raha", "taha", "shit"};
    std::random_device ran_dev;
    std::mt19937 gen(ran_dev());
    std::uniform_int_distribution<> dist(0,3);
    return std::string(names[dist(gen)]);
}

