//
// Created by Mostafa Oraei on 11/17/20.
//

#ifndef EX04_ASTEROBOCAL_H
#define EX04_ASTEROBOCAL_H

#include "IAsteroid.h"

class AsteroBocal : public IAsteroid{
public:
    std::string getName() const override;
    std::string beMined(DeepCoreMiner *) const override;
    std::string beMined(StripMiner const *) const override;
};


#endif //EX04_ASTEROBOCAL_H
