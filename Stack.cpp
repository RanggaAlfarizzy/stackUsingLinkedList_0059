#include <iostream>
using namespace std;

//Node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//stack class
class Stack
{
private:
    Node *top; // pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; // Initialize the stack with a null top
    }

    // Push operation: insert an element into the top of the stack
    int push(int value)