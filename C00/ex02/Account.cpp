/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:54:10 by wollio            #+#    #+#             */
/*   Updated: 2022/01/10 16:03:04 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << this->_accountIndex;
	_nbAccounts++;
	this->_amount = initial_deposit;
	std::cout << ";amount:" << this->_amount;
	_totalAmount += this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << checkAmount();
	std::cout << ";closed" << std::endl;
}

int Account::checkAmount(void) const
{
	return (_amount);
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	_nbDeposits = 1;
	std::cout << ";nb_deposits:" << _nbDeposits;
	_totalNbDeposits++;
	std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" <<this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused";
	}
	else
	{
		std::cout << withdrawal;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << ";amount:" << this->_amount;
		_nbWithdrawals = 1;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals;
		_totalNbWithdrawals++;
	}
	std::cout << std::endl;
	return (true);
}

void Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
}
