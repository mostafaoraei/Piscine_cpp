#include <iostream>
#include <vector>
#include "Account.h"

int main() {

    typedef std::vector<Account::t> account_t;
    typedef std::vector<int> ints_t;
    typedef std::pair<account_t::iterator, ints_t::iterator> acc_int_t;

    int const amounts[] = {42, 54, 957, 432, 1234, 0, 754, 16576};
    size_t const amount_size = (sizeof(amounts)/sizeof(int));
    account_t accounts(amounts, amounts+amount_size);
    account_t::iterator acc_begin = accounts.begin();
    account_t::iterator acc_end = accounts.end();
    int const d[] = {5, 765, 564, 2, 87, 23, 9, 20};
    size_t const d_size = (sizeof(d)/sizeof(int));
    ints_t deposits(d, d+d_size);
    ints_t::iterator deposit_begin = deposits.begin();
    ints_t::iterator deposit_end = deposits.end();

    int const w[] = {321, 34, 657, 4, 76, 275, 657, 7654};
    size_t const w_size = (sizeof(w)/sizeof(int));
    ints_t withdrawals(w, w+w_size);
    ints_t::iterator withdrawal_begin = withdrawals.begin();
    ints_t::iterator withdrawal_end = withdrawals.end();

    Account::displayAccountsInfos();
    std::for_each(acc_begin, acc_end, std::mem_fun_ref(&Account::displayStatus));

    for (acc_int_t it(acc_begin, deposit_begin);
        it.first != acc_end && it.second != deposit_end;
        ++(it.first), ++(it.second)) {

        (*(it.first)).makeDeposit(*(it.second));
    }

    Account::displayAccountsInfos();
    std::for_each(acc_begin, acc_end, std::mem_fun_ref(&Account::displayStatus));

    for (acc_int_t it(acc_begin, withdrawal_begin);
        it.first != acc_end && it.second != withdrawal_end;
        ++(it.first), ++(it.second)) {

        (*(it.first)).makeWithdrawal(*(it.second));
    }

    Account::displayAccountsInfos();
    std::for_each(acc_begin, acc_end, std::mem_fun_ref(&Account::displayStatus));


    return 0;
}
