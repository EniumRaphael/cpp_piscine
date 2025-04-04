/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:39:16 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/04 14:15:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
	std::cout << CLR_CYAN << "[MutantStack] Default constructor called" << CLR_RESET << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : std::stack<T>(copy) {
	std::cout << CLR_CYAN << "[MutantStack] Copy constructor called" << CLR_RESET << std::endl;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> &assign) {
	std::cout << CLR_CYAN << "[MutantStack] Assignment operator called" << CLR_RESET << std::endl;
	if (this != &assign) {
		std::stack<T>::operator=(assign);
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	std::cout << CLR_MAGENTA << "[MutantStack] Destructor called" << CLR_RESET << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}
