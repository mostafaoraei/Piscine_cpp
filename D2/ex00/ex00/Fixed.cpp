//
// Created by Mostafa Oraei on 10/25/20.
//

#include "Fixed.h"
#include <iostream>

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

Fixed::~Fixed() {
    std::cout << "Destructive called." << std::endl;
}

Fixed::Fixed(Fixed const &fixed) {
    std::cout << "Copy constructor called." << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignment operator called." << std::endl;
    this->setRawBits(fixed.getRawBits());
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "Get row member function called." << std::endl;
    return _fix_value;
}

void Fixed::setRawBits(const int raw) {
    _fix_value = raw;
}

Fixed::Fixed(const int raw) {
    this->setRawBits(raw);
}
