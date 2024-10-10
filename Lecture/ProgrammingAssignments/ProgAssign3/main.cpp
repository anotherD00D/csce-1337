#include "DayOfYear.h"
#include "DayofYear.cpp"

int main() {
    DayOfYear today, bachBirthday;
    cout << "Enter today's date:\n";
    today.input();
    cout << "Today's date is ";
    today.output();

    bachBirthday.set(3, 21);
    cout << "J. S. Bach's birthday is ";
    bachBirthday.output();

    if(today.getMonth() == bachBirthday.getMonth() &&
       today.getDay() == bachBirthday.getDay()) {
       cout << "Happy Birthday Johann Sebastian!\n";
       }
    else {
        cout << "Happy Unbirthday Johann Sebastian!\n";
    }

    return 0;
}