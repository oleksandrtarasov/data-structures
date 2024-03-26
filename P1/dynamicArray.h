#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

class DynamicArray {
private:
    int* array;
    int size; 
    int capacity;

public:
    DynamicArray();

    ~DynamicArray();

    void pushBack(int element);

    int getElementAt(int index) const;

    int getSize() const;

    int getCapacity() const;
};

#endif
#pragma once
