/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseo <junseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:48:02 by junseo            #+#    #+#             */
/*   Updated: 2022/11/23 19:47:34 by junseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {}

Fixed::Fixed(const Fixed& obj) {
    *this = obj;
}

Fixed::Fixed(const int value) {
    _rawBits = value << _fractionalBits;
}

Fixed::Fixed(const float value) {
    _rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& obj) {
    _rawBits = obj.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return _rawBits;
}

void Fixed::setRawBits(int const raw) {
    _rawBits = raw;
}

float Fixed::toFloat(void) const {
    return (float)_rawBits / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _rawBits >> _fractionalBits;
}

bool Fixed::operator>(const Fixed& obj) const {
    return _rawBits > obj.getRawBits();
}

bool Fixed::operator<(const Fixed& obj) const {
    return _rawBits < obj.getRawBits();
}

bool Fixed::operator>=(const Fixed& obj) const {
    return _rawBits >= obj.getRawBits();
}

bool Fixed::operator<=(const Fixed& obj) const {
    return _rawBits <= obj.getRawBits();
}

bool Fixed::operator==(const Fixed& obj) const {
    return _rawBits == obj.getRawBits();
}

bool Fixed::operator!=(const Fixed& obj) const {
    return _rawBits != obj.getRawBits();
}

Fixed Fixed::operator+(const Fixed& obj) const {
    return Fixed((toFloat() + obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed& obj) const {
    return Fixed((toFloat() - obj.toFloat()));
}

Fixed Fixed::operator*(const Fixed& obj) const {
    return Fixed((toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed& obj) const {
    return Fixed((toFloat() / obj.toFloat()));
}

Fixed& Fixed::operator++() {
    _rawBits++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator--() {
    _rawBits--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return a < b ? a : b;
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return a > b ? a : b;
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
    return a > b ? a : b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj) {
    out << obj.toFloat();
    return out;
}