#include "dynamicArray.h"
#include "dynamicArray.cpp"

int main() {
    int rows;
    int cols;

    int pos_i = 0;
    int pos_j = 0;

    cout << "Please enter the number of rows: ";
    cin >> rows;

    cout << "Please enter the number of cols: ";
    cin >> cols;

    DynamicArray DynArr1(rows, cols);
    DynArr1.SetArrayElement();

    DynArr1.PrintAllElements();
    cout << DynArr1.GetArrayElement(pos_i, pos_j) << endl;

    DynArr1.DeleteArrayInstance();

    return 0;
}