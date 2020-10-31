//
// Created by Mostafa Oraei on 10/25/20.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H

#include <fstream>
#include <cmath>

#define BITWISE (0b11111111)

class Fixed {
    int fixed_point_value_;
    static const int n_fractional_ = 8;

public:
    // default constructor
    Fixed();
    ~Fixed();

    // class constructor and initializer
    explicit Fixed(int raw);
    explicit Fixed(float raw);

    // copy constructor
    Fixed(const Fixed &fixed);

    // assignment operator
    Fixed & operator=(const Fixed &fixed);

    // overloading ostream operator
    friend std::ostream & operator<<(std::ostream & out ,const Fixed &fixed);

    // get integer part of fixed point number
    const int getRawBits() const;
    void setRawBits(int fixed_point);

    // return raw values from fixed point number
    float toFloat() const;
    int toInt() const;

};
#endif //EX00_FIXED_H
