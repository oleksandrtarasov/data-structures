#include "DynamicArray.h"
#include <iostream>

using namespace std;

DynamicArray::DynamicArray() {
    size = 0;
    capacity = 10; 
    array = new int[capacity];
}

DynamicArray::~DynamicArray() {
    delete[] array; 
}

void DynamicArray::pushBack(int element) {
    if (size >= capacity) {
        capacity *= 2;
        int* newArray = new int[capacity];
        for (int i = 0; i < size; ++i) {
            newArray[i] = array[i];
        }
        delete[] array; 
        array = newArray;
    }
    array[size] = element;
    ++size;
}

int DynamicArray::getElementAt(int index) const {
    if (index < 0 || index >= size) {
        cout << "Index out of range";
        return 0;
    }
    else {
        return array[index];
    }
}

int DynamicArray::getSize() const {
    return size;
}

int DynamicArray::getCapacity() const {
    return capacity;
}
