#include "student.h"
#include "student.cpp"

int main () {
    Competition comp1;

    while (toupper(comp1.GetChoice()) != 'Q') {
        comp1.ShowMenu();
    }
    
    return 0;
}