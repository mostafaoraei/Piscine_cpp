cmake_minimum_required(VERSION 3.16)
project(ex06)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex06 main.cpp Weapon.cpp Weapon.h HumanA.cpp HumanA.h HumanB.cpp HumanB.h)