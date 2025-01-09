/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:52:44 by rparodi           #+#    #+#             */
/*   Updated: 2024/12/27 14:13:47 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixed_value = 0;
	_floating_value = 0;
	_integer_value = 0;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_value = copy._fixed_value;
	this->_integer_value = copy._integer_value;
	this->_floating_value = copy._floating_value;
}

Fixed::Fixed(const int &integer) {
	this->_fixed_value = integer << _fractionnal;
}

Fixed::Fixed(const float &floating) {
	this->_fixed_value = (int)(roundf(floating * (1 << this->_fractionnal)));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &value){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_value = value._fixed_value;
	return *this;
}

std::ostream& operator<<(std::ostream &output, const Fixed &value) {
	output << value.toFloat();
	return (output);
}


void Fixed::setRawBits(const int value) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = value;
}

int Fixed::toInt() const {
	return ((int)this->_fixed_value >> this->_fractionnal);
}

float Fixed::toFloat() const {
	return ((float)this->_fixed_value / ( 1 << this->_fractionnal));
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_value;
}
Fixed & Fixed::operator > (const Fixed &value) {

}
Fixed & Fixed::operator < (const Fixed &value) {

}

Fixed & Fixed::operator >= (const Fixed &value) {

}

Fixed & Fixed::operator <= (const Fixed &value) {

}

Fixed & Fixed::operator == (const Fixed &value) {

}

Fixed & Fixed::operator != (const Fixed &value) {

}

Fixed & Fixed::operator + (const Fixed &value) {

}

Fixed & Fixed::operator - (const Fixed &value) {

}

Fixed & Fixed::operator / (const Fixed &value) {

}

Fixed & Fixed::operator * (const Fixed &value) {
	
}

fixed fixed::operator ++ () {
	return (*this);
}

Fixed Fixed::operator -- () {
	this->_fixed_value++;
	return (*this);
}


Fixed & Fixed::operator ++ () {
	this->_fixed_value++;
	return (*this);
}

Fixed & Fixed::operator -- () {
	this->_fixed_value--;
	return (*this);
}
