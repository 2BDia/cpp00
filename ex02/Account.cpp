/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:21:35 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/01 16:56:29 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = getNbAccounts();
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << Account::_nbAccounts
		<< ";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals
		<< std::endl;
}

// void	Account::makeDeposit(int deposit)
// {
	
// }

// bool	Account::makeWithdrawal(int withdrawal)
// {
	
// }

// int	checkAmount(void) const
// {
	
// }

// void	displayStatus(void) const
// {
	
// }

