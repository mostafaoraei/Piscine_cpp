//
// Created by Mostafa Oraei on 10/20/20.
//

#ifndef EX02_ZOMBIE_H
#define EX02_ZOMBIE_H
#include <string>

class Zombie {
    int type;
    std::string name;

public:
    Zombie();

    ~Zombie();

    Zombie(int type, std::string name);

    explicit Zombie(std::string name);

    void announce();

    void setType(int type);
};


#endif //EX02_ZOMBIE_H
