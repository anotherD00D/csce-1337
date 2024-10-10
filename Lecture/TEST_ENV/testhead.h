#include <iostream>
#include <string>
#include <iomanip>

#ifndef TESTHEAD_H
#define TESTHEAD_H

using namespace std;

class Account {

public:
    Account();
    Account(string AccountName);

    //functions
    string GetAccountName();
    void SetAccountName(string AccountName);

private:
    string AccountName;
};

#endif