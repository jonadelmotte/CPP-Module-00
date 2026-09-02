/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:34:28 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/02 13:34:29 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>


int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    _nbAccounts--;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}


int Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}



void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    // [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


int Account::checkAmount( void ) const
{
    return (_amount);
}

void Account::makeDeposit( int deposit )
{
    _totalAmount += deposit;
    _amount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}
//DEPOSIT ON EST LA
// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1

bool Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if (withdrawal > _amount)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbDeposits << std::endl;
        return (true);
    }
}

void Account::_displayTimestamp( void )
{
    std::time_t time = std::time(NULL);
    std::tm time_act = *std::localtime(&time);
    std::cout << "[" << (time_act.tm_year + 1900);
    std::cout << std::setfill('0') << std::setw(2) << time_act.tm_mon << std::setw(2) << time_act.tm_mday << "_" << std::setw(2) << time_act.tm_hour << std::setw(2) << time_act.tm_min << std::setw(2) << time_act.tm_sec << "] ";
}
