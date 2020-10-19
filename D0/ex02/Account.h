//
// Created by Mostafa Oraei on 10/17/20.
//

#ifndef EX02_ACCOUNT_H
#define EX02_ACCOUNT_H


class Account {
private:
    int _amount;
    int _nbDeposits;
    int _nbWithdrawals;
    int _accountIndex;

public:

    typedef Account t;

    static int _nbTotalAccount;
    static int _totalDeposits;
    static int _totalWithdrawals;
    static int _totalAmounts;

    explicit Account(int initial_deposit);

    ~Account();

    void makeDeposit(int deposit);

    void makeWithdrawal(int withdrawal);

    static void displayAccountsInfos();

    void displayStatus() const;

    static void _displayTimestamp();
};


#endif //EX02_ACCOUNT_H
