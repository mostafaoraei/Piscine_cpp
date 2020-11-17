cmake_minimum_required(VERSION 3.16)
project(ex04)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex04 main.cpp DeepCoreMiner.cpp DeepCoreMiner.h StripMiner.cpp StripMiner.h MiningBarge.cpp MiningBarge.h IAsteroid.h IMiningLaser.h AsteroBocal.cpp AsteroBocal.h BocalSteroid.cpp BocalSteroid.h)