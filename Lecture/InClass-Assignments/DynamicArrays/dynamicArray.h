#include <iostream>
#include <array>

#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

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

#endif