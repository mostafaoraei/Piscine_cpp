//
// Created by Mostafa Oraei on 11/16/20.
//

#ifndef EX04_STRIPMINER_H
#define EX04_STRIPMINER_H

#include "IMiningLaser.h"

class StripMiner: public IMiningLaser {
public:
    StripMiner();
    StripMiner(const StripMiner & strip);
    ~StripMiner();
    StripMiner & operator=(const StripMiner & strip);

    void mine(IAsteroid* target) override ;
};


#endif //EX04_STRIPMINER_H
