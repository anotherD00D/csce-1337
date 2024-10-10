#include <iostream>

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

using namespace std;

class DayOfYear {
    public:
        void input();
        void output();

        void set(int newMonth, int newDay);
        
        int getMonth();

        int getDay();

    private:
        void checkDate();
        int month;
        int day;
};

#endif