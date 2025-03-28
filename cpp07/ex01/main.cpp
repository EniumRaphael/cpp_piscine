/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:50:53 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/28 19:20:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::cout << CLR_YELLOW << "[ Testing with an array of all digits (color function) ]" << CLR_RESET << std::endl;
	iter(digits, 10, ::colors);
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "[ Testing with an array of all digits (tentimes function) ]" << CLR_RESET << std::endl;
	iter(digits, 10, ::tentimes);
	std::cout << std::endl;

	std::cout << std::endl;
	std::string letters[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"};

	std::cout << CLR_YELLOW << "[ Testing with an array of all letters (color function) ]" << CLR_RESET << std::endl;
	iter(letters, 12, ::colors);
	std::cout << std::endl;

}
