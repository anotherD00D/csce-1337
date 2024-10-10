#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

#ifndef ACCOUNT_H
#define ACCOUNT_H

using namespace std;

class Account {

public:

    Account();
    Account(string &AccountName, double &balance);

    //functions
    string GetAccountName();
    double const GetBalance();

    void const PrintInitialAccount();

    void SetAccountName(string &AccountName);
    void SetBalance(double &balance);

private:
    string AccountName;
    double balance;
};

#endif