/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:21:49 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 20:05:29 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(Cat const & copy);
		Cat & operator=(Cat const & assign);
		virtual void makeSound() const;
		virtual Cat* clone() const;
		std::string getIdea(int const index) const;
		void setIdea(int const index, std::string const idea) const;
	protected:
		Brain *brain;
		std::string type;
};

#endif
