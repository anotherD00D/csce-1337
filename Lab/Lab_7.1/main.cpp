#include "Account.h"
#include "AccountDriver.cpp"

int main() {
    string AccountName;
    double inputBalance;

    Account acct1;
    Account acct2;
    vector<Account> VecAcount =  {acct1, acct2};

    softNameOutput("Account Name Creator");   

    cout << "Account #1" << endl;
    acct1.PrintInitialAccount();

    cout << "Account #2" << endl;
    acct2.PrintInitialAccount();
    
    for (Account& obj : VecAcount) {
        cout << "Please enter your desired name of the account: " << endl;
        getline(cin, AccountName);
        cin.ignore(1000, '\n'); 
        obj.SetAccountName(AccountName);

        cout << "Please deposit a balance to the account:" << endl;
        cin >> inputBalance;
        obj.SetBalance(inputBalance);

        cout << "The name of your account: ";
        cout << obj.GetAccountName() << endl;

        cout << "Current balance of the account: ";
        cout << obj.GetBalance() << endl;
    }

   return 0;
}