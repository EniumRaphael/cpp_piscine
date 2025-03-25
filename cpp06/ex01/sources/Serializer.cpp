/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:49:50 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/25 13:57:12 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {
	return;
}

Serializer::Serializer(Serializer const & src) {
	*this = src;
	return;
}

Serializer::~Serializer(void) {
	return;
}

Serializer & Serializer::operator=(Serializer const & rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	Data *tmp = reinterpret_cast<Data*>(raw);
	if (!tmp) {
		throw std::runtime_error("Error: Deserialize failed !");
		return NULL;
	}
	return (tmp);
}
