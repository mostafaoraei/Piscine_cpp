#include <iostream>
#include "Zombie.h"
#include "ZombieEvent.h"

int main() {
    Zombie *mostafa = new Zombie(0,"mostafa");
    Zombie ali(1, "ali");
    mostafa->announce();
    ali.announce();

    *mostafa = ZombieEvent::randomChump();
    auto *unknown = new Zombie();
    *unknown = ZombieEvent::setZombieType(3);
    delete mostafa;
    delete unknown;
    return 0;
}
