#include "DayOfYear.h"

void DayOfYear::input() {
    cout << "Enter the month as a number: ";

    cin >> month;
    cout << "Enter the day of the month: ";
    cin >> day;
    checkDate();
}

void DayOfYear::output() {
    cout << "month = " << month
    << ", day = " << day << endl;
}

void DayOfYear::set(int newMonth, int newDay) {
    month = newMonth;
    day = newDay;
    checkDate();
}

void DayOfYear::checkDate() {
    if((month < 1) || (month > 12) || (day < 1) || (day > 31)) {
        cout << "Illegal date. Aborting program.\n";
        exit(1);
    }
}

int DayOfYear::getMonth() {
    return month;
}

int DayOfYear::getDay() {
    return day;
}