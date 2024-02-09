#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
    this->_totalAmount = this->_amount;
    this->_nbAccounts++;
    this->_totalNbDeposits++;
    this->_nbDeposits++;
}

Account::~Account(void)
{

}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    std::cout << getNbAccounts() << std::endl;
    std::cout << getTotalAmount() << std::endl;
    std::cout << getNbDeposits() << std::endl;
    std::cout << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int Withdrawal)
{
    if (this->_amount <= 0)
        return false;
    this->_amount -= Withdrawal;
    this->_nbWithdrawals++;
    _totalAmount -= Withdrawal;
    _totalNbWithdrawals++;
    return true;
}

int Account::checkAmount(void) const
{
    return this->_amount;
}

void Account::displayStatus(void) const
{
    std::cout << checkAmount() << std::endl;
}