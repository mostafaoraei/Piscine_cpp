#include <iostream>
#include "Human.h"
#include <string>

int main()
{
    Human h;
    std::string section_name = "melee";
    std::string target = "saeed rajabali";
    h.action(section_name, target);
    return 0;
}
