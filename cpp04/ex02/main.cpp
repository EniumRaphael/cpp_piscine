/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:08:09 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/10 12:40:53 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	const unsigned int n = 42;
	if (n % 2 != 0) {
		std::cerr << "n must be an even number, if not i can't create the same number of Cat and Animal" << std::endl;
		return (1);
	}

	std::cout << "\033[0;33m[ Building classes ]\033[0m" << std::endl;
	Animal *animals[n];
	for (unsigned int i = 0; i < n; i++) {
		std::cout << "(" << i + 1 << ") ";
		if (i % 2 == 0) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	std::cout << "\033[0;33m[ Making sounds ]\033[0m" << std::endl;
	for (unsigned int i = 0; i < n; i++) {
		std::cout << "(" << i + 1 << ") ";
		animals[i]->makeSound();
	}

	std::cout << "\033[0;33m[ Deleting classes ]\033[0m" << std::endl;
	for (unsigned int i = 0; i < n; i++) {
		std::cout << "(" << i + 1 << ") ";
		delete animals[i];
	}

	return 0;
}
