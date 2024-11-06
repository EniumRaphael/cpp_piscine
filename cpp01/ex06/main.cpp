/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:11:42 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/06 19:50:18 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error:\nThanks to follow this syntax: " << argv[0] << " <args>" << std::endl;
		return (1);
	}
	Harl not_happy_peapol;

	std::string choice(argv[1]);
	not_happy_peapol.complain(choice);
}
