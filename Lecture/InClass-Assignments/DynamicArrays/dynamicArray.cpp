#include <iostream>
#include <array>

using namespace std;

class DynamicArray {
    public:
        DynamicArray();
        DynamicArray(int &rows, int &cols);

        int const GetArrayElement(int &i, int &j);
        void const PrintAllElements();

        void SetArrayElement();
        void DeleteArrayInstance();

    private:
        int rows;
        int cols;
        int value = 0;
        int** arr;
};

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
    return outputValue;
}

void const DynamicArray::PrintAllElements() {
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
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }

    delete[] arr;
}

int main() {
    int rows;
    int cols;

    int pos_i = 1;
    int pos_j = 1;

    cin >> rows;
    cin >> cols;

    DynamicArray DynArr1(rows, cols);
    DynArr1.SetArrayElement();

    DynArr1.PrintAllElements();
    cout << DynArr1.GetArrayElement(pos_i, pos_j) << endl;

    DynArr1.DeleteArrayInstance();

    return 0;
}