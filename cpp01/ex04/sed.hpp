/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:27:45 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/05 21:58:59 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <streambuf>
#include <string>
#include <fstream>

#include "err_msg.hpp"

class Sed
{
	public:
		Sed(char **argv, std::ifstream *input);
		~Sed();
		bool line(std::ofstream output);
		const char *getFilename();
	private:
		std::string _filename;
		std::string _to_replace;
		std::string _by_word;
		std::ifstream *_input;
};

#endif
