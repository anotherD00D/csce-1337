#include "Calculator.h"
#include "Calculator.cpp"

using namespace std;

int main() {
    Calculator calc;
    
    while(calc.GetChoice() != 5) {
        calc.showMenu();
    }

    return 0;
}