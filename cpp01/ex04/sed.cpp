/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:58:02 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/06 16:14:03 by rparodi          ###   ########.fr       */
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

bool Sed::line(std::ofstream& output)
{
	std::string to_ret;

	if (!std::getline(*_input, to_ret)) {
		return false;
	}

	std::string result;
	std::size_t pos = 0;
	std::size_t found = 0;

	while ((found = to_ret.find(_to_replace, pos)) != std::string::npos) {
		result += to_ret.substr(pos, found - pos) + _by_word;
		pos = found + _to_replace.length();
	}

	result += to_ret.substr(pos);

	output << result << std::endl;
	return true;
}
