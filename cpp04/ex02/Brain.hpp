/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:17:49 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/07 17:51:43 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
	public:
		Brain();
		~Brain();
		std::string idea[100];
		Brain& operator=(Brain &value);

	protected:

	private:

};

#endif
