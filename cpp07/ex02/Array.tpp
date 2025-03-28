/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:47:57 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/28 22:31:24 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {
	std::cout << "[Array] Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {
	std::cout << "[Array] Constructor with size called" << std::endl;
}

template <typename T>
Array<T>::Array(Array const &copy) : _array(new T[copy._size]), _size(copy._size) {
	for (unsigned int i = 0; i < copy._size; i++) {
		this->_array[i] = copy._array[i];
	}
	std::cout << "[Array] Copy constructor called" << std::endl;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const &assign) {
	if (this != &assign) {
		delete[] this->_array;
		this->_array = new T[assign._size];
		this->_size = assign._size;
		for (unsigned int i = 0; i < assign._size; i++) {
			this->_array[i] = assign._array[i];
		}
	}
	std::cout << "[Array] Assignation operator called" << std::endl;
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->_array;
	std::cout << "[Array] Destructor called" << std::endl;
}

template <typename T>
T & Array<T>::operator[](unsigned int i) const {
	if (i >= this->_size) {
		throw std::out_of_range("Index out of range");
	}
	return this->_array[i];
}

template <typename T>
unsigned int Array<T>::size() const {
	return this->_size;
}

template <typename T>
std::ostream& operator<<(std::ostream& output, Array<T> const &Array) {
	output << CLR_BLUE << "Size:\t" << CLR_GOLD << Array.size() << CLR_RESET << std::endl << std::endl;
	for (unsigned int i = 0; i < Array.size(); i++) {
		output << CLR_BLUE << "tab[" << CLR_GOLD << i << CLR_BLUE << "]\t" << CLR_GOLD << Array[i] << CLR_RESET << std::endl;
	}
	return output;
}
