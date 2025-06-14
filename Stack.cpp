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
     {
        Node *newNode = new Node(); //1.Allocate memory for the new node
        newNode->data = value; //2. assign value
        newNode->next = top; //3. set the next point
        top = newNode; // 4. Update the top node
        cout << "Push value: " << value << endl;
        return value;
     }
   //pop operation: Remove the topmost element from the stack
    void pop()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << "stack is empty." << endl;
            return;
        }
        cout << "Popped value: " << temp->data << endl;
        top = top->next; // Update top pointer to the node
        delete temp;
    }
    //peek/top operation: Retrieve the value of the topmost
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
        } // return the value of the top node
    }

    bool isEmpty()
    {
        return top == NULL; // return true if the top pointer
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

         switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // push the entered value into stack
            break;

        case 2:
            stack.pop(); // get the value from the stack
            break;

        case 3:
            stack.peek(); // get the value of the top element
            break;

        case 4:
            cout << "Exiting program." << endl;
            break;
        
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << endl;
    }

    return 0;
}