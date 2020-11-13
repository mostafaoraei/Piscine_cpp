//
// Created by Mostafa Oraei on 11/11/20.
//

#ifndef EX00_FRAGTRAP_H
#define EX00_FRAGTRAP_H

#include <string>
#include "ClapTrap.h"

class FragTrap: ClapTrap {

public:
    FragTrap();
    explicit FragTrap(std::string name);
    FragTrap(FragTrap const & frag);
    ~FragTrap();
    FragTrap & operator=(FragTrap const & frag);

    void vaulthunter_dot_exe(std::string const & target);

};


#endif //EX00_FRAGTRAP_H
