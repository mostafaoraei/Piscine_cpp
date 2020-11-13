//
// Created by Mostafa Oraei on 11/12/20.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
    std::cout << "Init ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    setName(name);
    std::cout << "Init ScavTrap with Name: " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &frag) {
    *this = frag;
    std::cout << "Copy Constructor ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destroyed ScavTrap" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &frag) {
    this->setName(frag.getName());
    this->setHitPoint(frag.getHitPoint());
    this->setMaxHitPoint(frag.getMaxHitPoint());
    this->setEnergyPoint(frag.getEnergyPoint());
    this->setMaxEnergyPoint(frag.getMaxEnergyPoint());
    this->setLevel(frag.getLevel());

    std::cout << "Assignment operator ScavTrap" << std::endl;
    return *this;
}

void ScavTrap::challengeNewcomer(const std::string &target) {
    std::string challenges[5] = {"fart", "ass", "fun", "shoes", "lie"};

    std::random_device rn;
    std::mt19937 generator(rn());
    std::uniform_int_distribution<int> dist(0,4);

    std::cout << this->getName() << " challenge " << target << " with challenge " << challenges[dist(generator)] << std::endl;
}