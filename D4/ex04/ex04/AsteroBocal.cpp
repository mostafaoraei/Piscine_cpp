//
// Created by Mostafa Oraei on 11/17/20.
//

#include "AsteroBocal.h"

std::string AsteroBocal::getName() const {
    return "AsteroBocal";
}

std::string AsteroBocal::beMined(DeepCoreMiner *) const {
    return "Thorite";
}

std::string AsteroBocal::beMined(StripMiner const *) const {
    return "Flavium";
}
