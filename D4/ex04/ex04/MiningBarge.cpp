//
// Created by Mostafa Oraei on 11/16/20.
//

#include "MiningBarge.h"

MiningBarge::MiningBarge() {

}

MiningBarge::MiningBarge(const MiningBarge &miningBarge) {
    *this = miningBarge;
}

MiningBarge::~MiningBarge() {

}

MiningBarge &MiningBarge::operator=(const MiningBarge &miningBarge) {
    for (int i = 0; i < 4; ++i)
        _lasers[i] = miningBarge._lasers[i];
    return *this;
}

void MiningBarge::equip(IMiningLaser * laser) {
    if (!laser)
        return;

    for (int i=0; i<4; ++i) {
        if (_lasers[i] == NULL) {
            _lasers[i] = laser;
            break;
        }
    }
}

void MiningBarge::mine(IAsteroid * asteroid) const {
    if (!asteroid)
        return;

    for (int i=0; i<4; ++i) {
        if (_lasers[i])
            _lasers[i]->mine(asteroid);
    }
}
