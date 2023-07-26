/*
Sarah is running a popular amusement park, and she wants to manage the queue of visitors waiting for a popular ride.
However, the queue size varies throughout the day as more visitors arrive.
Sarah needs a program to efficiently manage the queue, and she decides to implement a dynamic queue using pointers

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

bool isEmpty(Node* front, Node* rear) {
    return (front == NULL && rear == NULL);
}

void enqueue(Node** front, Node** rear, int data) {
    Node* newNode = createNode(data);
    if (isEmpty(*front, *rear)) {
        *front = newNode;
        *rear = newNode;
    } else {
        (*rear)->next = newNode;
        *rear = newNode;
    }
}

void dequeue(Node** front, Node** rear) {
    if (isEmpty(*front, *rear)) {
        cout << "Queue is empty. Cannot dequeue." << endl;
    } else {
        Node* temp = *front;
        *front = (*front)->next;
        cout<<temp->data<<" deleted!\n";
        delete temp;
        if (*front == NULL) {
            *rear = NULL;
        }
    }
}

int getFront(Node* front) {
    if (front == NULL) {
        cout << "Queue is empty. No front element." << endl;
        return -1;
    } else {
        return front->data;
    }
}

void displayQueue(Node* front, Node* rear) {
    if (isEmpty(front, rear)) {
        cout << "Queue is empty." << endl;
    } else {
        Node* current = front;
        cout << "Queue: ";
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

void deleteQueue(Node** front, Node** rear) {
    while (!isEmpty(*front, *rear)) {
        dequeue(front, rear);
    }
}

int main() {
    Node* front = NULL;
    Node* rear = NULL;

    enqueue(&front, &rear, 1);
    enqueue(&front, &rear, 2);
    enqueue(&front, &rear, 3);
    enqueue(&front, &rear, 4);

    displayQueue(front, rear);

    cout << "Front element: " << getFront(front) << endl;

    dequeue(&front, &rear);
    dequeue(&front, &rear);

    displayQueue(front, rear);

    deleteQueue(&front, &rear);

    return 0;
}

/*
This program implements a dynamic queue using pointers. It defines functions to create a new node,
check if the queue is empty, enqueue an element, dequeue the front element, get the front element without
removing it, display the queue, and delete the queue.
The main function demonstrates the usage of these functions by performing various queue operations.

*/



