/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:33:02 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/04 14:27:54 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::list<int> lst;
	MutantStack<int> mstack;
	lst.push_back(5);
	lst.push_back(17);
	mstack.push(5);
	mstack.push(17);
	std::cout << std::endl << CLR_YELLOW << "\t[ Testing top() method ]" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "List:\t\t" << CLR_GOLD << lst.back() << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "MutantStack:\t" << CLR_GOLD << mstack.top() << CLR_RESET << std::endl;
	mstack.pop();
	lst.pop_back();
	std::cout << std::endl << CLR_YELLOW << "\t[ Testing size() method ]" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "List:\t\t" << CLR_GOLD << lst.size() << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "MutantStack:\t" << CLR_GOLD << mstack.size() << CLR_RESET << std::endl;
	mstack.push(3);
	lst.push_back(3);
	mstack.push(5);
	lst.push_back(5);
	mstack.push(737);
	lst.push_back(737);
	mstack.push(0);
	lst.push_back(0);
	std::list<int>::iterator lst_it = lst.begin();
	std::list<int>::iterator lst_ite = lst.end();
	MutantStack<int>::iterator mstack_it = mstack.begin();
	MutantStack<int>::iterator mstack_ite = mstack.end();
	lst_it++;
	lst_it--;
	++mstack_it;
	--mstack_it;
	std::cout << std::endl << CLR_YELLOW << "\t[ Testing iterator ]" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "List:" << CLR_RESET << "\t\t";
	while (lst_it != lst_ite)
	{
		std::cout << CLR_GOLD << *lst_it << CLR_RESET << " ";
		++lst_it;
	}
	std::cout << std::endl << CLR_BLUE << "MutantStack:" << CLR_RESET << "\t";
	while (mstack_it != mstack_ite)
	{
		std::cout << CLR_GOLD << *mstack_it << CLR_RESET << " ";
		++mstack_it;
	}
	std::cout << std::endl;
	std::cout << std::endl << CLR_YELLOW << "\t[ Testing stack conversion ]" << CLR_RESET << std::endl;
	std::stack<int> s(mstack);
	std::cout << CLR_BLUE << "Stack size:\t" << CLR_GOLD << s.size() << CLR_RESET << std::endl << std::endl;
	return 0;
}
