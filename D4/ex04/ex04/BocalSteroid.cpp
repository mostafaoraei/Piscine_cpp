//
// Created by Mostafa Oraei on 11/17/20.
//

#include "BocalSteroid.h"

std::string BocalSteroid::getName() const {
    return "BocalSteroid";
}

std::string BocalSteroid::beMined(DeepCoreMiner *) const {
    return "Zazium";
}

std::string BocalSteroid::beMined(StripMiner const *) const {
    return "Krpite";
}
