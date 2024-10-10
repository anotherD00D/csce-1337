#include "account.h"

void softNameOutput (string softName) {
    int widthNum = softName.size() + 7;

    cout << "\n" << setw(widthNum) << setfill('*') << "\n";
    cout << "** " + softName + " **";
    cout << "\n" << setfill('*') << setw(widthNum) << "\n" << endl;
}

void Account::SetAccountName (string AccountName) {
    this->AccountName = AccountName; 
}

string Account::GetAccountName() {
    return AccountName;
}

int main() {
    //Variable Initialization
    string AccountName;

    //Variable Initialization and Declaration


    //Void output to display name of program
    softNameOutput("Account Name Creator");   

    //Gather Inputs
    cout << "Please enter your desired name of the account: " << endl;
    getline(cin,AccountName);    

    //Instantiate Class
    Account Account1;

    //Set class object members
    Account1.SetAccountName(AccountName);


    cout << "The name of your account: ";
    cout << Account1.GetAccountName() << endl;
    
   return 0;
}