//
// Created by Mostafa Oraei on 10/21/20.
//

#ifndef EX08_HUMAN_H
#define EX08_HUMAN_H

#include <string>

class Human {
private:
    void meleeAttack(std::string const &  target);
    void rangedAttack(std::string const & target);
    void intimidatingAttack(std::string const & target);

public:
    Human();
    void action(std::string const & section_name, std::string const & target);
    void (*fcnPtr)(const std::string &);
};


#endif //EX08_HUMAN_H
