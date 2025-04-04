/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:09:32 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/04 15:07:59 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main() {
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << std::endl<< CLR_YELLOW << "[ Test request by subject (2 / 14)]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << "Shortest span: " << CLR_GOLD << sp.shortestSpan() << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << "Longest span: " << CLR_GOLD << sp.longestSpan() << CLR_RESET << std::endl;
	} catch (std::exception &e) {
		std::cerr << CLR_RED << "Error: " << e.what() << CLR_RESET << std::endl;
	}

	try {
		std::cout << std::endl<< CLR_YELLOW << "[ AddNumbers method ]" << CLR_RESET << std::endl;
		Span sp = Span(2);
		std::vector<int> vec;
		vec.push_back(7);
		vec.push_back(13);
		sp.addNumbers(vec.begin(), vec.end());
		std::cout << CLR_BLUE << "Shortest span: " << CLR_GOLD << sp.shortestSpan() << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << "Longest span: " << CLR_GOLD << sp.longestSpan() << CLR_RESET << std::endl;
		vec.clear();
		vec.push_back(42);
		vec.push_back(21);
		sp.addNumbers(vec.begin(), vec.end());
	} catch (std::exception(&e)) {
		std::cerr << CLR_RED << "Error: " << e.what() << CLR_RESET << std::endl;
	}
	return 0;
}
