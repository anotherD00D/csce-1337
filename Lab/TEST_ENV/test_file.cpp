#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int *p;
    p = &x;

    cout << "Value of x: " << x << endl;
    cout << "Value at pointer p: " << *p << endl;

    *p = 20;
    cout << "New value of x: " << x << endl;
}