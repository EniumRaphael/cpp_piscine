/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:21:56 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 16:30:56 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const & copy);
		WrongAnimal & operator=(WrongAnimal const & assign);
		void makeSound() const;

	protected:
		std::string type;
};

#endif
