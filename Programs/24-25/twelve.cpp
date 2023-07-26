/*
Given a singly linked list, write a function to reverse the list using pointer arithmetic without using extra data structures.

Input: Original linked list: 1 2 3 4 5
Output: Reversed linked list: 5 4 3 2 1

*/

#include <iostream>

// Define a singly linked list node
struct Node {
    int data;
    Node* next;
};

// Function to reverse a linked list using pointer arithmetic
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, new Node{5, nullptr}}}}};

    std::cout << "Original linked list: ";
    printLinkedList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    std::cout << "Reversed linked list: ";
    printLinkedList(head);

    return 0;
}

/*
The program demonstrates how to reverse a singly linked list using pointer arithmetic without using additional
memory. It creates a sample linked list and shows both the original and reversed versions.
The functions for reversing and printing the linked list use pointer manipulation to achieve the desired behavior.
This program serves as a practical illustration of linked list manipulation using pointers in C++.

*/


