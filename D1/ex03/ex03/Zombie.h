//
// Created by Mostafa Oraei on 10/20/20.
//

#ifndef EX03_ZOMBIE_H
#define EX03_ZOMBIE_H

#include <string>

class Zombie {
int type = 0;
std::string name = "unknown";
public:
    Zombie(int type, std::string name);

    Zombie();

    ~Zombie();

    void announce();

    void setName(std::string name);
};


#endif //EX03_ZOMBIE_H
