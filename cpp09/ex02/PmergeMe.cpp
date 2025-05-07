/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:45:19 by rparodi           #+#    #+#             */
/*   Updated: 2025/05/07 12:02:56 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>

PmergeMe::PmergeMe() {
	std::cout << CLR_GREEN << "Default constructor called" << CLR_RESET << std::endl;
}

PmergeMe::~PmergeMe() {
	std::cout << CLR_MAGENTA << "Destructor called" << CLR_RESET << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy) : _vec(copy._vec) {
	std::cout << CLR_GREEN << "Copy constructor called" << CLR_RESET << std::endl;
}

PmergeMe::PmergeMe(std::vector<int> vec) : _vec(vec) {
	std::cout << CLR_GREEN << "Constructor with vector called" << CLR_RESET << std::endl;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &assign) {
	std::cout << CLR_GREEN << "Copy assignment operator called" << CLR_RESET << std::endl;
	if (this != &assign) {
		this->_vec = assign._vec;
	}
	return *this;
}

