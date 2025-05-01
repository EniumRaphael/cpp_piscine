/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:45:40 by rparodi           #+#    #+#             */
/*   Updated: 2025/05/01 16:28:50 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

int	main(int argc, char **argv) {
	if (DEBUG)
		std::cerr << CLR_MAGENTA << "Warning: DEBUG_MODE is now enable" << CLR_RESET << std::endl << std::endl;
	if (argc < 2)
		std::cerr << CLR_RED << "Usage:\t" << argv[0] << " <number> <number> ..." << CLR_RESET << std::endl;
	return (0);
}
