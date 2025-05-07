/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:45:40 by rparodi           #+#    #+#             */
/*   Updated: 2025/05/07 14:51:45 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>

int check_input(int argc, char **argv) {
	for (size_t i = 1; i < static_cast<size_t>(argc); i++) {
		for (size_t j = 0; argv[i][j]; j++) {
			if (!std::isdigit(argv[i][j]))
				return i;
		}
	}
	return (0);
}


int	main(int argc, char **argv) {
	if (DEBUG)
		std::cerr << CLR_BLUE << "Debug: DEBUG_MODE is now enable" << CLR_RESET << std::endl << std::endl;
	if (argc < 2) {
		std::cerr << CLR_RED << "Usage:\t" << argv[0] << " <number> <number> ..." << CLR_RESET << std::endl;
		return 1;
	}
	if (DEBUG) {
		std::cerr << CLR_BLUE << "Debug: " << argv[0] << " have " << argc - 1 << " arguments !" << CLR_RESET << std::endl << std::endl;
	}
	int check = check_input(argc, argv);
	if (check) {
		std::cerr << CLR_RED << "Error: I only have to have number in parameter (args: " << check << ")" << CLR_RESET << std::endl;
		if (DEBUG)
			std::cerr << CLR_BLUE << "\tValue of args: [" << argv[check] << "]" << CLR_RESET << std::endl;
		return 1;
	}
	struct timeval start, end;

	std::cout << CLR_YELLOW << "\tUsing std::" << CLR_GOLD << "vector" << CLR_RESET << std::endl;
	std::vector<int> vec = convert<std::vector<int> >(argc, argv);
	print_container(vec, false);
	gettimeofday(&start, NULL);
	FordJohnson(vec);
	gettimeofday(&end, NULL);
	print_container(vec, false);
	long vecTime = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);

	std::cout << std::endl << std::endl;
	std::cout << CLR_YELLOW << "\tUsing std::" << CLR_GOLD << "deque" << CLR_RESET << std::endl;
	std::deque<int> deq = convert<std::deque<int> >(argc, argv);
	print_container(deq, false);
	gettimeofday(&start, NULL);
	FordJohnson(deq);
	gettimeofday(&end, NULL);
	print_container(deq, true);
	long deqTime = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);

	std::cout << std::endl << CLR_YELLOW << "\tTime for Ford-Johnson" << CLR_RESET << std::endl;
	std::cout << CLR_YELLOW << "Time for vector" << " : " << CLR_GOLD << vecTime << CLR_YELLOW << " us" << CLR_RESET << std::endl;
	std::cout << CLR_YELLOW << "Time for deque"<< " : " << CLR_GOLD << deqTime << CLR_YELLOW << " us" << CLR_RESET << std::endl;

	return 0;
}
