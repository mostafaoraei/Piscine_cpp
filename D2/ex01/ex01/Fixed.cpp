//
// Created by Mostafa Oraei on 10/25/20.
//

#include "Fixed.h"
#include <iostream>

Fixed::Fixed() : _fixed_point_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructive called." << std::endl;
}

Fixed::Fixed(Fixed const &fixed) {
    std::cout << "Copy constructor called." << std::endl;
    this->_fixed_point_value = fixed._fixed_point_value;
    this->raw = fixed.raw;
    this->rawISInt = fixed.rawISInt;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignment operator called." << std::endl;
    this->_fixed_point_value = fixed._fixed_point_value;
    this->raw = fixed.raw;
    this->rawISInt = fixed.rawISInt;
    return *this;
}

const int Fixed::getRawBits() const {
    return _fixed_point_value;
}

Fixed::Fixed(const int raw) : _fixed_point_value(raw), rawISInt(true) {
    std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float raw) : _fixed_point_value(raw), raw(raw), rawISInt(false) {
    std::cout << "Float constructor called." << std::endl;
}

float Fixed::toFloat() const {
    float tmp_float = roundf(this->raw * 100) / 100 ;
    return tmp_float;
}

int Fixed::toInt() const {
     int cast_int = this->getRawBits();
     return cast_int;
}

std::ostream & operator<<(std::ostream & out, const Fixed &fixed) {
    return out << ((fixed.rawISInt) ? fixed.getRawBits() : fixed.toFloat());
}
