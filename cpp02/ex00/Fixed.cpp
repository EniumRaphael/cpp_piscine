/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:52:44 by rparodi           #+#    #+#             */
/*   Updated: 2024/12/23 14:34:26 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixed_value = 0;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_value = copy._fixed_value;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &value){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_value = value._fixed_value;
	return *this;
}

void Fixed::setRawBits(const int value) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = value;
}

int Fixed::getRawBits() {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_value;
}
