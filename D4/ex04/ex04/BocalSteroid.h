//
// Created by Mostafa Oraei on 11/17/20.
//

#ifndef EX04_BOCALSTEROID_H
#define EX04_BOCALSTEROID_H

#include "IAsteroid.h"

class BocalSteroid : public IAsteroid {
public:
    std::string getName() const override;
    std::string beMined(DeepCoreMiner *) const override;
    std::string beMined(StripMiner const *) const override;
};


#endif //EX04_BOCALSTEROID_H
