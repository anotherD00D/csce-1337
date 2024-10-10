#include <iostream>
#include <string>
#include <iomanip>

#ifndef ACCOUNT_H
#define ACCOUNT_H

using namespace std;

class Account {

public:

    //functions
    string GetAccountName();
    void SetAccountName(string AccountName);

private:
    string AccountName;
};

#endif