#include "Calculator.h"

Calculator::Calculator() {
    value = 0;
}

Calculator::Calculator(double value) {
    this->value = value;
}

void Calculator::Add(double inputValue) {
    value += inputValue; 
}

void Calculator::Subtract(double inputValue) {
    value -= inputValue;
}
    
void Calculator::Multiply(double inputValue) {
    value *= inputValue;
}
    
void Calculator::Divide(double inputValue) {
    value /= inputValue;
}
    
void Calculator::Clear() {
    value = 0.0;
}
    
double Calculator::GetValue() {
    cout << fixed << setprecision(1);
    return value;
}

void Calculator::showMenu() {
    string softName = "Simple Calculator";
    vector<string> calcOperations = {"Addition", "Subtraction", "Multiplication", "Division", "Quit"};
    int widthNum = softName.size() + 7;
    int tempValue;

    cout << "\n" << setw(widthNum) << setfill('*') << "\n";
    cout << "** " + softName + " **";
    cout << "\n" << setfill('*') << setw(widthNum) << "\n" << endl;

    for (unsigned int i = 0; i < calcOperations.size(); ++i) {
        cout << (i+1) << ". ";
        cout << calcOperations.at(i) << endl;
    }

    cout << endl << "Enter integer choice: " << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter number to add:" << endl;
        cin >> tempValue;
        Add(tempValue);
        cout << "Current Value: " << GetValue() << endl;
        break;
    case 2:
        cout << "Enter number to subtract:" << endl;
        cin >> tempValue;
        Subtract(tempValue);
        cout << "Current Value: " << GetValue() << endl;
        break;
    case 3:
        cout << "Enter number to multiply:" << endl;
        cin >> tempValue;
        Multiply(tempValue);
        cout << "Current Value: " << GetValue() << endl;
        break;
    case 4:
        cout << "Enter number to divide:" << endl;
        cin >> tempValue;
        Divide(tempValue);
        cout << "Current Value: " << GetValue() << endl;
        break;
    }
}

int Calculator::GetChoice() {
    return choice;
}