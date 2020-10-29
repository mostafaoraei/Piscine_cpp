//
// Created by Mostafa Oraei on 10/25/20.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H

#include <fstream>
#include <cmath>

class Fixed {
    int _fixed_point_value;
    static const int _n_fractional = 8;
    float raw;
    bool rawISInt;
public:
    // default constructor
    Fixed();

    ~Fixed();

    // class constructor and initializer
    explicit Fixed(int raw);
    explicit Fixed(float raw);

    // copy constructor
    Fixed(const Fixed &fixed);

    // assignment operators
    Fixed & operator=(const Fixed &fixed);
    friend std::ostream & operator<<(std::ostream & out ,const Fixed &fixed);

    // get integer part of fixed point number
    const int getRawBits() const;

    // return raw values from fixed point number
    float toFloat() const;
    int toInt() const;

};
#endif //EX00_FIXED_H
