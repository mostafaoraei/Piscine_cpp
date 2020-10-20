//
// Created by Mostafa Oraei on 10/20/20.
//

#ifndef EX03_ZOMBIEHORDE_H
#define EX03_ZOMBIEHORDE_H

#include "Zombie.h"
#include <vector>

class ZombieHorde {
    Zombie (*zz);
public:

    explicit ZombieHorde(int n);

    ~ZombieHorde();

    std::string getRandomName();
};


#endif //EX03_ZOMBIEHORDE_H
