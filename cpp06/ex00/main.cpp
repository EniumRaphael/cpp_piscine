/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:49:02 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/21 18:26:21 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(void) {
	ScalarConverter test;
	test.convert(new std::string("a"));
	std::cout << std::endl;
	test.convert(new std::string("0"));
	std::cout << std::endl;
	test.convert(new std::string("4294967300"));
	std::cout << std::endl;
	test.convert(new std::string("42.42"));
	std::cout << std::endl;
	test.convert(new std::string("-inff"));
	std::cout << std::endl;
	test.convert(new std::string("+inff"));
	std::cout << std::endl;
	test.convert(new std::string("nanf"));
	std::cout << std::endl;
	test.convert(new std::string("-inf"));
	std::cout << std::endl;
	test.convert(new std::string("+inf"));
	std::cout << std::endl;
	test.convert(new std::string("nan"));
}
