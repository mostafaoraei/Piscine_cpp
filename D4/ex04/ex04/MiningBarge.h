//
// Created by Mostafa Oraei on 11/16/20.
//

#ifndef EX04_MININGBARGE_H
#define EX04_MININGBARGE_H

#include "IMiningLaser.h"
#include "IAsteroid.h"

class MiningBarge {

    IMiningLaser * _lasers[4];
public:
    MiningBarge();
    MiningBarge(MiningBarge const & miningBarge);
    ~MiningBarge();
    MiningBarge & operator=(MiningBarge const & miningBarge);

    void equip(IMiningLaser*);
    void mine(IAsteroid*) const;
};


#endif //EX04_MININGBARGE_H
