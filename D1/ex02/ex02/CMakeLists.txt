cmake_minimum_required(VERSION 3.16)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex02 main.cpp Zombie.cpp Zombie.h ZombieEvent.cpp ZombieEvent.h)