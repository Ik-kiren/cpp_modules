#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

    int Account::_nbAccounts = 0;
    int Account::_totalAmount = 0;
    int Account::_totalNbDeposits = 0;
    int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
    _displayTimestamp();
    std::cout << "index:" + std::to_string(_nbAccounts) + ";amount:" + std::to_string(this->_amount) + ";created" << std::endl;
    _totalAmount += this->_amount;
    this->_accountIndex = getNbAccounts();
    _nbAccounts++;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" + std::to_string(this->_accountIndex);
    std::cout << ";p_amount:" + std::to_string(this->checkAmount());
    std::cout << ";closed" << std::endl;
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
    _displayTimestamp();
    std::cout << "accounts:" + std::to_string(getNbAccounts());
    std::cout << ";total:" + std::to_string(getTotalAmount());
    std::cout << ";deposits:" + std::to_string(getNbDeposits());
    std::cout << ";withdrawals:" + std::to_string(getNbWithdrawals()) << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" + std::to_string(this->_accountIndex);
    std::cout << ";p_amount:" + std::to_string(this->checkAmount());
    std::cout << ";deposit:" + std::to_string(deposit);
    std::cout << ";amount:" + std::to_string(this->checkAmount() + deposit);
    std::cout << ";nb_deposits:" + std::to_string(this->_nbDeposits + 1) << std::endl;
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int Withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" + std::to_string(this->_accountIndex);
    std::cout << ";p_amount:" + std::to_string(this->checkAmount());
    if (this->checkAmount() - Withdrawal <= 0)
    {
        std::cout << ";withdrawal:refused" << std::endl;;
        return false;
    }
    std::cout << ";withdrawal:" + std::to_string(Withdrawal);
    std::cout << ";amount:" + std::to_string(this->checkAmount() - Withdrawal);
    std::cout << ";nb_withdrawals:" + std::to_string(this->_nbWithdrawals + 1) << std::endl;
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
    _displayTimestamp();
    std::cout << "index:" + std::to_string(this->_accountIndex);
    std::cout << ";amount:" + std::to_string(this->checkAmount());
    std::cout << ";deposits:" + std::to_string(this->_nbDeposits);
    std::cout << ";withdrawals:" + std::to_string(this->_nbWithdrawals) << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t ntime = time(0);

    tm *tmn = localtime(&ntime);

    std::cout << "[" + std::to_string(tmn->tm_year + 1900);
    std::cout << std::setfill('0') << std::setw(2) << tmn->tm_mon + 1;
    std::cout << std::to_string(tmn->tm_mday) + "_" ;
    std::cout << tmn->tm_hour;
    std::cout << tmn->tm_min;
    std::cout << std::to_string(tmn->tm_sec) + "] ";
}