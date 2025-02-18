/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:21:56 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 20:14:43 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <string>

class AAnimal {
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(AAnimal const & copy);
		AAnimal & operator=(AAnimal const & assign);
		virtual void makeSound() const = 0;
		virtual AAnimal* clone() const = 0;
		virtual std::string getIdea(int const index) const = 0;
		virtual void setIdea(int const index, std::string const idea) const = 0;

	protected:
		std::string type;
};

#endif
