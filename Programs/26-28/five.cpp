/*
 In a school, the administration wants to maintain a specific students roll numbers efficiently.
 They need a program that allows them to create a linked list to store the student roll numbers.
 The program should dynamically allocate memory to optimize memory usage.

 Input: 11 26 32 49
 Output: Linked List: 11 26 32 49
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

void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head ==    NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void displayList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void deleteList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

int main() {
    Node* head = NULL;

    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);

    cout << "Linked List: ";
    displayList(head);

    deleteList(head);

    return 0;
}

/*
This program creates a linked list using dynamic memory allocation. It defines functions to create a new node, insert
a node at the end of the list, display the list, and delete the list.
The main function demonstrates the usage of these functions by inserting elements into the list, displaying the list,
and deallocating the memory.
*/
