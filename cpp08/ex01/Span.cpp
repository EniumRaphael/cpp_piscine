/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:54:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/03 16:23:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() : _size(0), _vec() {
	std::cout << CLR_CYAN << "[Span] Default constructor called" << CLR_RESET << std::endl;
}

Span::Span(unsigned int size) : _size(size), _vec() {
	std::cout << CLR_CYAN << "[Span] Constructor with size called" << CLR_RESET << std::endl;
}

Span::Span(Span const &copy) : _size(copy._size), _vec(_size) {
	std::cout << CLR_CYAN << "[Span] Copy constructor called" << CLR_RESET << std::endl;
}

Span& Span::operator=(Span const &assign) {
	if (this != &assign) {
		this->_size = assign._size;
		this->_vec = assign._vec;
	}
	std::cout << CLR_CYAN << "[Span] Assign operator called" << CLR_RESET << std::endl;
	return *this;
}

Span::~Span() {
	std::cout << CLR_MAGENTA << "[Span] Destructor called" << CLR_RESET << std::endl;
}

void Span::addNumber(int number) {
	++_size;
	if (_vec.size() > this->_size) {
		--_size;
		throw std::out_of_range("Span is full");
	} else {
		_vec.push_back(number);
	}
}

/**
 * @brief Find the shortest span between two numbers in the vector
 *
 * @return difference between the two closest numbers
 */
unsigned int Span::shortestSpan() {
	if (_vec.size() < 2) {
		throw std::out_of_range("Not enough numbers in Span");
	}
	unsigned int diff = std::numeric_limits<unsigned int>::max();
	for (size_t i = 0; i < _vec.size(); i++) {
		for (size_t j = i + 1; j < _vec.size(); j++) {
			if (_vec.at(i) > _vec.at(j) && static_cast<unsigned int>(std::abs(_vec.at(i) - _vec.at(j))) < diff) {
				diff = std::abs(_vec.at(i) - _vec.at(j));
			}
			if (_vec.at(j) > _vec.at(i) && static_cast<unsigned int>(std::abs(_vec.at(j) - _vec.at(i))) < diff) {
				diff = std::abs(_vec[j] - _vec[i]);
			}
		}
	}
	return diff;
}

/**
 * @brief Find the longest span between two numbers in the vector
 *
 * @return difference between the two farthest numbers
 */
unsigned int Span::longestSpan() {
	if (_vec.size() < 2) {
		throw std::logic_error("Not enough elements to find a span");
	}

	int maxVal = *std::max_element(_vec.begin(), _vec.end());
	int minVal = *std::min_element(_vec.begin(), _vec.end());

	return static_cast<unsigned int>(maxVal - minVal);
}
