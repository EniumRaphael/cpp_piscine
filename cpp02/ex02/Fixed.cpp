/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:52:44 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/15 19:16:27 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixed_value = 0;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_value = copy._fixed_value;
}

Fixed::Fixed(const int &integer) {
	this->_fixed_value = integer << this->_fractionnal;
}

Fixed::Fixed(const float &floating) {
	this->_fixed_value = (int)(roundf(floating * (1 << this->_fractionnal)));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &value) {
	this->_fixed_value = value._fixed_value;
	return *this;
}

Fixed Fixed::operator+(Fixed const &other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(Fixed const &other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(Fixed const &other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(Fixed const &other) const {
	return Fixed(this->toFloat() / other.toFloat());
}

bool Fixed::operator==(Fixed const &other) const {
	return this->_fixed_value == other._fixed_value ? true : false;
}

bool Fixed::operator!=(Fixed const &other) const {
	return this->_fixed_value != other._fixed_value ? true : false;
}

bool Fixed::operator>(Fixed const &other) const {
	return this->_fixed_value > other._fixed_value ? true : false;
}

bool Fixed::operator<(Fixed const &other) const {
	return this->_fixed_value < other._fixed_value ? true : false;
}

bool Fixed::operator>=(Fixed const &other) const {
	return this->_fixed_value < other._fixed_value ? false : true;
}

bool Fixed::operator<=(Fixed const &other) const {
	return this->_fixed_value < other._fixed_value ? false : true;
}

Fixed & Fixed::operator++() {
	this->_fixed_value += 1;
	return *this;
}

Fixed Fixed::operator ++ (int) {
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed & Fixed::operator -- () {
	this->_fixed_value -= 1;
	return *this;
}

Fixed Fixed::operator -- (int) {
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

std::ostream& operator<<(std::ostream &output, const Fixed &value) {
	output << value.toFloat();
	return (output);
}

int Fixed::toInt() const {
	return ((int)this->_fixed_value >> this->_fractionnal);
}

float Fixed::toFloat() const {
	return ((float)this->_fixed_value / ( 1 << this->_fractionnal ));
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_value;
}

void Fixed::setRawBits(const int value) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = value;
}

Fixed & Fixed::min(Fixed &a, Fixed &b) {
	return a < b ? a : b;
}

Fixed & Fixed::max(Fixed &a, Fixed &b) {
	return a > b ? a : b;
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b) {
	return a < b ? a : b;
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b) {
	return a > b ? a : b;
}
