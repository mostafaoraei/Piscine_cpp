//
// Created by Mostafa Oraei on 11/11/20.
//

#include "FragTrap.h"
#include <iostream>
#include <random>

FragTrap::FragTrap() {
    std::cout << "Init FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    setName(name);
    std::cout << "Init FragTrap with Name: " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag) {
    *this = frag;
    std::cout << "Copy Constructor FragTrap" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Destroyed FragTrap" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag) {
    this->setName(frag.getName());
    this->setHitPoint(frag.getHitPoint());
    this->setMaxHitPoint(frag.getMaxHitPoint());
    this->setEnergyPoint(frag.getEnergyPoint());
    this->setMaxEnergyPoint(frag.getMaxEnergyPoint());
    this->setLevel(frag.getLevel());

    std::cout << "Assignment operator FragTrap" << std::endl;
    return *this;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
    if (this->getEnergyPoint() - 25 > 0) {
        this->setEnergyPoint(this->getEnergyPoint() - 25);
    }  else {
        std::cout << "You need more energy!" << std::endl;
    }

    typedef void (FragTrap::*fcptr)(const std::string &);
    fcptr attacks[] = {&FragTrap::meleeAttack,
                       &FragTrap::rangedAttack,
                       &FragTrap::bulletAttack,
                       &FragTrap::knifeAttack,
                       &FragTrap::fartAttack};

    std::random_device dev;
    std::mt19937 rn(dev());
    std::uniform_int_distribution<int> dist5(0, 4);

    (this->*attacks[dist5(rn)])(target);
}