//
// Created by Mostafa Oraei on 10/17/20.
//

#include "Account.h"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit) {
    Account::_displayTimestamp();
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbTotalAccount;
    _nbTotalAccount++;
    _totalAmounts += initial_deposit;

    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}

Account::~Account() {
    _nbTotalAccount--;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
    _amount += deposit;
    _nbDeposits += 1;
    _totalDeposits += 1;
    _totalAmounts += deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount - deposit
              << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

void Account::makeWithdrawal(int withdrawal) {
    if (_amount > withdrawal) {
        _amount -= withdrawal;
        _nbWithdrawals += 1;
        _totalWithdrawals += 1;
        _totalAmounts -= withdrawal;

        _displayTimestamp();
        std::cout << "index:" << _accountIndex
                  << ";p_amount:" << _amount + withdrawal
                  << ";withdrawal:" << withdrawal
                  << ";amount:" << _amount
                  << ";nb_withdrawals:" << _nbWithdrawals
                  << std::endl;
    } else {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex
                  << ";p_amount:" << _amount
                  << ";withdrawal:" << "refused"
                  << std::endl;
    }
}

void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << _nbTotalAccount
              << ";total:" << _totalAmounts
              << ";deposits:" << _totalDeposits
              << ";withdrawals:" << _totalWithdrawals
              << std::endl;
}

void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::_displayTimestamp() {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    std::strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
}

int Account::_nbTotalAccount = 0;
int Account::_totalDeposits = 0;
int Account::_totalWithdrawals = 0;
int Account::_totalAmounts = 0;