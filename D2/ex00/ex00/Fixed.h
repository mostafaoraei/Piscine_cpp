//
// Created by Mostafa Oraei on 10/25/20.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H


class Fixed {
    int _fix_value;
    static const int _n_fractional = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed & fixed);
    Fixed & operator=(const Fixed & fixed);
    int getRawBits() const;
    void setRawBits(int raw);
};


#endif //EX00_FIXED_H
