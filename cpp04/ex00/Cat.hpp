/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:21:49 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 16:26:01 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(Cat const & copy);
		Cat & operator=(Cat const & assign);
		virtual void makeSound() const;
	protected:
		std::string type;
};

#endif
