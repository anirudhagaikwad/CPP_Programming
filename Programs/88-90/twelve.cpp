/*
You are a skilled software engineer working on a challenging project to develop an advanced ticketing system for a popular theme park.
The theme park's ticketing system aims to efficiently manage the flow of visitors and ensure smooth access to attractions.
To achieve this, you decide to design a flexible class template called TicketQueue, which serves as a custom Queue container to
store and manage ticketing data.

*/


#include <iostream>
using namespace std;

// Class template 'Node' represents a node in the linked list used to implement the Queue.
template <typename T>
class Node {
public:
    T data;
    Node* next;

    // Constructor for 'Node' class to initialize data and next pointer.
    Node(T data) : data(data), next(nullptr) {}
};

// Class template 'Queue' represents a queue implemented using a linked list.
template <typename T>
class Queue {
private:
    Node<T>* front;  // Pointer to the front of the queue.
    Node<T>* rear;   // Pointer to the rear of the queue.

public:
    // Constructor for 'Queue' class to initialize front and rear pointers to nullptr.
    Queue() : front(nullptr), rear(nullptr) {}

    // Method 'enqueue' adds an element to the rear of the queue.
    void enqueue(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Method 'dequeue' removes the front element from the queue.
    void dequeue() {
        if (!isEmpty()) {
            Node<T>* temp = front;
            front = front->next;
            delete temp;
            if (front == nullptr) {
                rear = nullptr;
            }
        }
    }

    // Method 'getFront' returns the data of the front element in the queue.
    T getFront() {
        if (!isEmpty()) {
            return front->data;
        }
        throw runtime_error("Queue is empty!");
    }

    // Method 'isEmpty' checks if the queue is empty.
    bool isEmpty() {
        return front == nullptr;
    }

    // Destructor for 'Queue' class to free memory occupied by the nodes.
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    // Create a Queue of integers.
    Queue<int> intQueue;
    intQueue.enqueue(5);
    intQueue.enqueue(10);
    cout << "Front element: " << intQueue.getFront() << endl;     // Output: Front element: 5
    intQueue.dequeue();
    cout << "Front element after dequeue: " << intQueue.getFront() << endl;  // Output: Front element after dequeue: 10

    // Create a Queue of strings.
    Queue<string> strQueue;
    strQueue.enqueue("Hello");
    strQueue.enqueue("World");
    cout << "Front element: " << strQueue.getFront() << endl;     // Output: Front element: Hello

    return 0;
}

/*
This C++ program demonstrates the use of a class template for a Queue data structure implemented using a linked list.
The 'Queue' class template provides methods to enqueue (add) and dequeue (remove) elements from the queue, and access the front element.

*/


