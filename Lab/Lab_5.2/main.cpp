#include "Calculator.h"
#include "Calculator.cpp"

using namespace std;

int main() {
    Calculator calc;

    calc.showMenu();

    double num1;
    double num2;

    cin >> num1;
    cin >> num2;

    cout << fixed << setprecision(1);
    cout << calc.GetValue() << endl;

    calc.Add(num1);
    cout << calc.GetValue() << endl;

    calc.Multiply(3);
    cout << calc.GetValue() << endl;

    calc.Subtract(num2);
    cout << calc.GetValue() << endl;
    
    calc.Divide(2);
    cout << calc.GetValue() << endl;

    calc.Clear();
    cout << calc.GetValue() << endl;


    return 0;
}