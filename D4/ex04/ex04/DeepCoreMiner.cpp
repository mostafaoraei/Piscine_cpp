//
// Created by Mostafa Oraei on 11/16/20.
//

#include "DeepCoreMiner.h"

DeepCoreMiner::DeepCoreMiner() {

}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &deep) {
    *this = deep;
}

DeepCoreMiner::~DeepCoreMiner() {

}

DeepCoreMiner &DeepCoreMiner::operator=(const DeepCoreMiner &deep) {
    *this = deep;
    return *this;
}

void DeepCoreMiner::mine(IAsteroid *target) {
    std::cout << "strip mining .... got " << target->beMined(this) << std::endl;
}
