/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:11:42 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/06 18:15:28 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl not_happy_peapol;

	std::cout << std::endl << "DEBUG MSG:" << std::endl;
	not_happy_peapol.complain("debug");
	std::cout << std::endl << "ERROR MSG:" << std::endl;
	not_happy_peapol.complain("error");
	std::cout << std::endl << "INFO MSG:" << std::endl;
	not_happy_peapol.complain("info");
	std::cout << std::endl << "WARNING MSG:" << std::endl;
	not_happy_peapol.complain("warning");
}
