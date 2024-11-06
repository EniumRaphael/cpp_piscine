/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:58:02 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/05 21:58:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <fstream>
#include <ios>

Sed::Sed(char **argv, std::ifstream *input)
{
	_filename = argv[1];
	_filename += ".replace";
	_to_replace = argv[2];
	_by_word = argv[3];
	_input = input;
}

Sed::~Sed()
{

}

const char *Sed::getFilename()
{
	return (_filename.c_str());
}

bool Sed::line(std::ofstream output)
{
	std::string to_ret;

	if (!std::getline((*_input), to_ret))
		return (false);
	output << to_ret << std::endl;
	std::cout << to_ret << std::endl;
	return (true);
}
