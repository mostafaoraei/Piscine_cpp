//
// Created by Mostafa Oraei on 11/12/20.
//

#ifndef EX00_SCAVTRAP_H
#define EX00_SCAVTRAP_H

#include <string>
#include <iostream>
#include <random>
#include "ClapTrap.h"

class ScavTrap : private ClapTrap {
public:
    ScavTrap();
    explicit ScavTrap(std::string name);
    ScavTrap(ScavTrap const & frag);
    ~ScavTrap();

    ScavTrap & operator=(ScavTrap const & frag);

    void challengeNewcomer(std::string const & target);
};


#endif //EX00_SCAVTRAP_H
