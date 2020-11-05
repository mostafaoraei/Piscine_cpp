//
// Created by Mostafa Oraei on 10/25/20.
//

#include "Fixed.h"
#include <iostream>

Fixed::Fixed() : fixed_point_value_(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructive called." << std::endl;
}

Fixed::Fixed(Fixed const &fixed) {
    std::cout << "Copy constructor called." << std::endl;
    this->fixed_point_value_ = fixed.fixed_point_value_;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignment operator called." << std::endl;
    this->fixed_point_value_ = fixed.fixed_point_value_;
    return *this;
}

std::ostream & operator<<(std::ostream & out, const Fixed &fixed) {
     if (fixed.getRawBits() & BITWISE) {
        out << fixed.toFloat();
    } else {
        out << fixed.toInt();
    }
    return out;
}

Fixed::Fixed(const int raw) {
    std::cout << "Int constructor called." << std::endl;
    setRawBits(raw << n_fractional_);
}

Fixed::Fixed(const float raw) {
    std::cout << "Float constructor called." << std::endl;
    setRawBits((int)roundf(raw * (1 << n_fractional_)));
}

int Fixed::toInt() const {
     return (int)(getRawBits() >> n_fractional_);
}

float Fixed::toFloat() const {
    return (float)getRawBits() / (float)(1 << n_fractional_);
}

void Fixed::setRawBits(int fixed_point) {
    fixed_point_value_ = fixed_point;
}

const int Fixed::getRawBits() const {
    return fixed_point_value_;
}

