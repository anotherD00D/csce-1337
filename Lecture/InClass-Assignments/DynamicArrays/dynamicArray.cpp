#include "dynamicArray.h"

DynamicArray::DynamicArray() {
    rows = 1;
    cols = 1;
    arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }
}

DynamicArray::DynamicArray(int &rows, int &cols) {
    this->rows = rows;
    this->cols = cols;
    this->arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }
}

int const DynamicArray::GetArrayElement(int &i, int &j) {
    int outputValue;

    if ((i >= rows) || (j >= cols)) {
        outputValue = 0;
    }
    else {
        outputValue = arr[i][j];
    }
    cout << "Returning the value of the element at position '" << i << "' and '" << j << "' in the dynamic array: ";
    return outputValue;
}

void const DynamicArray::PrintAllElements() {
    cout << "Printing the all elements inside the array." << endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void DynamicArray::SetArrayElement() {
    for (int i = 0; i < rows; ++i) {
        
        for (int j = 0; j < cols; ++j) {
            arr[i][j] =  ++value;
        }
    }
}

void DynamicArray::DeleteArrayInstance() {

    cout << "Deleting dynamic array....";
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }

    delete[] arr;
}