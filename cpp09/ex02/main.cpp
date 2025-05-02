/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:45:40 by rparodi           #+#    #+#             */
/*   Updated: 2025/05/02 16:12:03 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int check_input(int argc, char **argv) {
	for (size_t i = 1; i < static_cast<size_t>(argc); i++) {
		for (size_t j = 0; argv[i][j]; j++) {
			if (!std::isdigit(argv[i][j]))
				return (i);
		}
	}
	return (0);
}

int	main(int argc, char **argv) {
	if (DEBUG)
		std::cerr << CLR_MAGENTA << "Warning: DEBUG_MODE is now enable" << CLR_RESET << std::endl << std::endl;
	if (argc < 2)
		std::cerr << CLR_RED << "Usage:\t" << argv[0] << " <number> <number> ..." << CLR_RESET << std::endl;
	else {
		if (DEBUG) {
			std::cerr << CLR_CYAN << "Info: " << argv[0] << " have " << argc - 1 << " arguments !" << CLR_RESET << std::endl << std::endl;
		}
		int check = check_input(argc, argv);
		if (check) {
			std::cerr << CLR_RED << "Error: I only have to have number in parameter (args: " << check << ")" << CLR_RESET << std::endl;
			if (DEBUG)
				std::cerr << CLR_MAGENTA << "\tValue of args: [" << argv[check] << "]" << CLR_RESET << std::endl;
		}
	}
	return (0);
}
