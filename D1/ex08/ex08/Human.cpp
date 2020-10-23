//
// Created by Mostafa Oraei on 10/21/20.
//

#include "Human.h"
#include <iostream>

Human::Human() {}

void Human::meleeAttack(const std::string &target) {
    std::cout << "melee Attack to " << target << std::endl;
}

void Human::rangedAttack(const std::string &target) {
    std::cout << "ranged Attack to " << target << std::endl;
}

void Human::intimidatingAttack(const std::string &target) {
    std::cout << "intimidating Attack to " << target << std::endl;
}

void Human::action(const std::string &section_name, const std::string &target) {
    std::string names[] = {"melee", "ranged", "intimidating"};
    typedef void (Human::*fcnPtr)(const std::string &);
    fcnPtr funcPointers[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingAttack};

    for (int i=0; i < 3; ++i) {
        if (section_name == names[i]) {
            fcnPtr f = funcPointers[i];
            (this->*f)(target);
        }
    }
}
