/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:11:46 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/25 14:11:27 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

static void	_displayTimestamp( void )
{
	time_t raw_time = time(0);
	tm *time = localtime(&raw_time);
	std::cout << "[" << time->tm_year + 1900 << "0" << time->tm_mon + 1 << time->tm_mday << "_";
	std::cout << time->tm_hour << time->tm_min << time->tm_sec << "] ";
}

/// [19920104_091532] index:0;amount:42;created
Account::Account(int initial_deposit)
{
	_nbAccounts += 1;
	_totalAmount = initial_deposit;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _totalAmount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	_accountIndex--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _totalAmount << ";";
	std::cout << "closed" << std::endl;
}


int	Account::getNbAccounts()
{
	return (1);
}

int	Account::getTotalAmount();

static int	Account::getNbDeposits();

static int	Account::getNbWithdrawals();

/// [19920104_091532] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
static void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _totalAmount << ";";
	std::cout << "deposit:" << _totalNbDeposits << ";";
}
