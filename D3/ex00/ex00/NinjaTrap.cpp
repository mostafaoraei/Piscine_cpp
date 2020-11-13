//
// Created by Mostafa Oraei on 11/13/20.
//

#include "NinjaTrap.h"

NinjaTrap::NinjaTrap(){
    NinjaTrap("");
};

NinjaTrap::NinjaTrap(std::string name){
    setName(name);
    setHitPoint(60);
    setMaxHitPoint(60);
    setEnergyPoint(120);
    setMaxEnergyPoint(120);
    setMeleeAttackDamage(60);
    setRangedAttackDamage(5);
    setArmorDamageReduction(0);
}

NinjaTrap::~NinjaTrap() {
    std::cout << "Destroy Ninja" << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &frag) {
    std::cout << "Ninja shoeboc on frag" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &scav) {
    std::cout << "Ninja shoeboc on scav" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &ninja) {
    std::cout << "Ninja shoeboc on ninja" << std::endl;
}