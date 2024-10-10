#include "account.h"

void softNameOutput (string softName) {
    int widthNum = softName.size() + 7;

    cout << "\n" << setw(widthNum) << setfill('*') << "\n";
    cout << "** " + softName + " **";
    cout << "\n" << setfill('*') << setw(widthNum) << "\n" << endl;
}

Account::Account() {
    AccountName =  "Empty Bank Name";
    balance = 0.00;
}

Account::Account(string &AccountName, double &balance) {
    this->AccountName = AccountName;
    this->balance = balance;
}

void Account::SetAccountName (string &AccountName) {
    this->AccountName = AccountName; 
}

void Account::SetBalance(double &balance) {
    this->balance = balance++;
}

string Account::GetAccountName() {
    return AccountName;
}

double const Account::GetBalance() {
    return balance;
}

void const Account::PrintInitialAccount() {
    cout << "Initial Account Values" << endl;
    cout << "Name: " << AccountName << endl;
    cout << "Balance: " << balance << endl << endl;
}