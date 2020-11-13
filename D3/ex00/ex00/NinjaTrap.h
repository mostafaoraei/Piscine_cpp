//
// Created by Mostafa Oraei on 11/13/20.
//

#ifndef EX00_NINJATRAP_H
#define EX00_NINJATRAP_H

#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"
#include <string>

class NinjaTrap : ClapTrap {
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    ~NinjaTrap();

    void ninjaShoebox(const FragTrap & frag);
    void ninjaShoebox(const ScavTrap & scav);
    void ninjaShoebox(const NinjaTrap & ninja);
};


#endif //EX00_NINJATRAP_H
