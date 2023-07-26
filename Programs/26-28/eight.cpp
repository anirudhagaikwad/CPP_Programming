/*
You are working on a software project that requires handling a large number of elements using a stack data structure.
However, the size of the stack is not fixed, and it needs to grow or shrink based on the number of elements added or removed.
Write a program to implement a dynamic stack using pointers.

*/


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

bool isEmpty(Node* top) {
    return (top == NULL);
}

void push(Node** top, int data) {
    Node* newNode = createNode(data);
    if (isEmpty(*top)) {
        *top = newNode;
    } else {
        newNode->next = *top;
        *top = newNode;
    }
}

void pop(Node** top) {
    if (isEmpty(*top)) {
        cout << "Stack is empty. Cannot pop." << endl;
    } else {
        Node* temp = *top;
        *top = (*top)->next;
        cout<<temp->data<<" deleted!\n";
        delete temp;
    }
}

int peek(Node* top) {
    if (isEmpty(top)) {
        cout << "Stack is empty. No top element." << endl;
        return -1;
    } else {
        return top->data;
    }
}

void displayStack(Node* top) {
    if (isEmpty(top)) {
        cout << "Stack is empty." << endl;
    } else {
        Node* current = top;
        cout << "Stack: ";
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

void deleteStack(Node** top) {
    while (!isEmpty(*top)) {
        pop(top);
    }
}

int main() {
    Node* top = NULL;

    push(&top, 1);
    push(&top, 2);
    push(&top, 3);
    push(&top, 4);

    displayStack(top);

    cout << "Top element: " << peek(top) << endl;

    pop(&top);
    pop(&top);

    displayStack(top);

    deleteStack(&top);

    return 0;
}


/*
This program implements a dynamic stack using pointers. It defines functions to create a new node, check if the stack is empty, push an
element onto the stack, pop the top element, get the top element without removing it, display the stack, and delete the stack.
The main function demonstrates the usage of these functions by performing various stack operations.

*/

