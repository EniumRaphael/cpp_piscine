/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:58:06 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 18:51:23 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain  {
	public:
		Brain();
		Brain(const Brain &copy);
		Brain& operator=(const Brain &assign);
		~Brain();
		std::string getIdea(int index) const;
		void setIdea(int const index, std::string const idea);
	private:
		std::string ideas[100];
};

#endif
