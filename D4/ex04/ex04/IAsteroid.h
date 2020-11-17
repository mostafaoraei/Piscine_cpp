//
// Created by Mostafa Oraei on 11/16/20.
//

#ifndef EX04_IASTEROID_H
#define EX04_IASTEROID_H

#include <string>

class StripMiner;
class DeepCoreMiner;

class IAsteroid {
public:
    virtual ~IAsteroid() {};
    virtual std::string beMined(DeepCoreMiner *) const = 0;
    virtual std::string beMined(StripMiner const *) const = 0;

    virtual std::string getName() const = 0;
};
#endif //EX04_IASTEROID_H
