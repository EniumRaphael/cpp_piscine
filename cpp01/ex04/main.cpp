/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:24:29 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/09 10:36:55 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "err_msg.hpp"
#include "sed.hpp"
#include <fstream>
#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << CLR_RED ERR_PREFIX ARGS_MISSING << std::endl;
		return (1);
	}
	std::ifstream input(argv[1]);
	if (!input)
	{
		std::cerr << CLR_RED ERR_PREFIX << argv[1] << FILE_CANT_OPEN CLR_RESET << std::endl;
		return (1);
	}
	Sed new_sed = Sed(argv, &input);
	std::ofstream output(new_sed.getFilename());
	if (!output.is_open()) {
		std::cerr << CLR_RED ERR_PREFIX << new_sed.getFilename() << FILE_CANT_OPEN CLR_RESET << std::endl;
		return 1;
	}
	while (new_sed.line(output))
	{
	}
}
