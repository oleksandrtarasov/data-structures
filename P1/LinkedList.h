#pragma once
#include <iostream>

using namespace std;



struct Node
{
    int data;
    Node* link;
};

class LinkedList
{
    Node* first;
    Node* last;
    Node* temp;


public:
    bool isEmpty();

    void insert(int x);

    void insertAtEnd(int x);

    void print();


};