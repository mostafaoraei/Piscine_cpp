//
// Created by Mostafa Oraei on 10/25/20.
//

#include "Fixed.h"
#include <iostream>

Fixed::Fixed() : fixed_point_value_(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(Fixed const &fixed) {
    this->setRawBits(fixed.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    this->setRawBits(fixed.getRawBits());
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
    setRawBits(raw << n_fractional_);
}

Fixed::Fixed(const float raw) {
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

bool Fixed::operator<(const Fixed &fixed) {
    return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>(const Fixed &fixed) {
    return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) {
    return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) {
    return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) {
    return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) {
    return (this->getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) {
    Fixed temp = Fixed((this->getRawBits() + fixed.getRawBits()) / (float)(1 << n_fractional_));
    return temp;
}

Fixed Fixed::operator-(const Fixed &fixed) {
    Fixed temp = Fixed((this->getRawBits() - fixed.getRawBits()) / (float)(1 << n_fractional_));
    return temp;
}

Fixed Fixed::operator*(const Fixed &fixed) {
    Fixed temp = Fixed((this->getRawBits() * fixed.getRawBits()) / ((float)(1 << n_fractional_)*(float)(1 << n_fractional_)));
    return temp;
}

Fixed Fixed::operator/(const Fixed &fixed) {
    if (fixed.getRawBits() == 0) {
        Fixed temp = Fixed(0);
        return temp;
    } else {
        Fixed temp = Fixed((this->getRawBits() / fixed.getRawBits()));
        return temp;
    }
}

Fixed &Fixed::operator++() {
    ++(this->fixed_point_value_);
    return *this;
}

Fixed &Fixed::operator--() {
    --(this->fixed_point_value_);
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    ++(*this);
    return tmp;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    --(*this);
    return tmp;
}
