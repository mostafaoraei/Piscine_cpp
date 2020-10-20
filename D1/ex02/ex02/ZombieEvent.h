//
// Created by Mostafa Oraei on 10/20/20.
//

#ifndef EX02_ZOMBIEEVENT_H
#define EX02_ZOMBIEEVENT_H
#include "Zombie.h"

class ZombieEvent {
public:
    static Zombie setZombieType(int type);

    static Zombie randomChump();
};


#endif //EX02_ZOMBIEEVENT_H
