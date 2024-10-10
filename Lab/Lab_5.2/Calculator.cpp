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
    return value;
}