//
// Created by Mostafa Oraei on 11/16/20.
//

#ifndef EX04_IMININGLASER_H
#define EX04_IMININGLASER_H

#include "IAsteroid.h"
#include <iostream>

class IMiningLaser {
public:
    virtual ~IMiningLaser() {}
    virtual void mine(IAsteroid*) = 0;
};
#endif //EX04_IMININGLASER_H
