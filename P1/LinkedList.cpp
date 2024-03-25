#include <iostream>
#include "LinkedList.h"

using namespace std;



// struct Node
// {
//     int data;
//     Node* link;
// };

bool LinkedList::isEmpty()
{
    return first == NULL;
}

void LinkedList::insert(int x)
{
    temp = new Node;
    temp->data = x;
    if (isEmpty())
    {
        temp->link = NULL;
        last = temp;
    }
    else
        temp->link = first;
    first = temp;
}


void LinkedList::insertAtEnd(int x)
{
    temp = new Node;
    temp->data = x;
    temp->link = NULL;
    if (isEmpty())
    {
        first = temp;
        last = temp;
    }
    else
    {
        last->link = temp;
        last = temp;
    }
}


void LinkedList::print()
{
    if (1)
    {
        for (temp = first; temp != NULL; temp = temp->link)
        {
            cout << temp->data << endl;
        }

    }
    else
    {
        cout << "List is empty" << endl;
    }
}