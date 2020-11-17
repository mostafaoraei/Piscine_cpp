//
// Created by Mostafa Oraei on 11/16/20.
//

#include "StripMiner.h"

StripMiner::StripMiner() {

}

StripMiner::StripMiner(const StripMiner &strip) {
    *this = strip;
}

StripMiner::~StripMiner() {

}

StripMiner &StripMiner::operator=(const StripMiner &strip) {
    return *this;
}

void StripMiner::mine(IAsteroid *target) {
    std::cout << "strip mining .... got " << target->beMined(this) << std::endl;
}
