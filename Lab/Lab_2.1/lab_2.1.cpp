#include <iostream>
using namespace std;

void softNameOutput () {
    cout << endl;
    cout << "**************************" << endl;
    cout << "** Leap Year Calculator **" << endl;
    cout << "**************************" << endl;
    cout << endl;
}

int daysInFebFunc (int inputYear) {  // Function created to calculate if input year is a leap year == Ex. input(1712) output(29)
    int daysInFeb = 28;              // Function will only output the amount of days in February

    if ((inputYear % 4) == 0) {                 //Calculate if inputyear is divisible by 4
        daysInFeb = 29;
        if ((inputYear % 100) == 0) {           //Calculate if inputyear is divisible by 100
            if ((inputYear % 400) != 0) {       //Calculate if inputyear is divisible by 400
                daysInFeb = 28;
            }
        }
    }
    return daysInFeb;
}

int main() {
   int inputYear;           //Variable used to capture year input
   bool isLeapYear;         //Boolean utilized to capture the conditional expression after running "daysInFunc" function
   
    softNameOutput();       //Void output to display name of program

   cout << "Please input year:" << endl;
   cin >> inputYear;

    isLeapYear = (daysInFebFunc(inputYear) == 29) ? true : false;

    if (isLeapYear) {
        cout << endl << inputYear << " has 29 days in February." << endl;
    }
    else {
        cout << endl << inputYear << " has 28 days in February." << endl;
    }

   return 0;
}