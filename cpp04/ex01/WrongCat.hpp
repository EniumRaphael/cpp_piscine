/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:21:49 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 16:48:00 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const & copy);
		WrongCat & operator=(WrongCat const & assign);
		virtual void makeSound() const;
	protected:
		std::string type;
};

#endif
