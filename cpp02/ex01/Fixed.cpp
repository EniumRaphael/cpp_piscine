/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:52:44 by rparodi           #+#    #+#             */
/*   Updated: 2024/12/27 13:06:30 by rparodi          ###   ########.fr       */
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
	this->_integer_value = integer;
	this->_floating_value = integer;
}

Fixed::Fixed(const float &floating) {
	this->_integer_value = roundf(floating);
	this->_floating_value = floating;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &value){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_value = value._fixed_value;
	this->_integer_value = value._integer_value;
	this->_floating_value = value._floating_value;
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
	return (std::roundf(this->_floating_value));
}

float Fixed::toFloat() const {
	return (this->_floating_value);
}

int Fixed::getRawBits() {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_value;
}
