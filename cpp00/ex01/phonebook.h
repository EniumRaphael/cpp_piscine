/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:59:14 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/20 20:03:43 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>

class contact {
	public:
		int id;
		std::string number;
		std::string first_name;
		std::string last_name;
		std::string nickname;
	
		void print(void);
};

#endif
