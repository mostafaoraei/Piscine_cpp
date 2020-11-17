//
// Created by Mostafa Oraei on 11/16/20.
//

#ifndef EX04_DEEPCOREMINER_H
#define EX04_DEEPCOREMINER_H

#include "IMiningLaser.h"
#include "IAsteroid.h"

class DeepCoreMiner: public IMiningLaser {
public:
    DeepCoreMiner();
    DeepCoreMiner(const DeepCoreMiner & deep);
    ~DeepCoreMiner();
    DeepCoreMiner & operator=(const DeepCoreMiner & deep);

    void mine(IAsteroid* target) override;
};


#endif //EX04_DEEPCOREMINER_H
