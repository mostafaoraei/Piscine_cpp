cmake_minimum_required(VERSION 3.16)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp Zombie.cpp Zombie.h ZombieHorde.cpp ZombieHorde.h)