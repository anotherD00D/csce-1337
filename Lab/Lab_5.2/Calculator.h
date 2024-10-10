#include <iostream>
#include <iomanip>
#include <string>

#ifndef CALCULATOR_H
#define CALCULATOR_H

using namespace std;

class Calculator {
    public:
    Calculator();
    Calculator(double value);

    //functions
    void showMenu();
    void Add(double inputValue);
    void Subtract(double inputValue);
    void Multiply(double inputValue);
    void Divide(double inputValue);
    void Clear();

    double GetValue();

    private:
    double value;
};

#endif