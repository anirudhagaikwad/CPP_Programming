/*
 Implement a queue data structure using the STL library in C++.
 Create a menu-driven program that allows the user to perform the following operations: enqueue an element into the queue, dequeue an element
 from the queue, and display the front element of the queue.
*/

#include <iostream>
#include <queue>

int main() {
    std::queue<int> que;
    int choice, element;

    do {
        std::cout << "1. Enqueue an element" << std::endl;
        std::cout << "2. Dequeue an element" << std::endl;
        std::cout << "3. Display front element" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter element to enqueue: ";
                std::cin >> element;
                que.push(element);
                break;
            case 2:
                if (!que.empty()) {
                    que.pop();
                    std::cout << "Element dequeued successfully." << std::endl;
                } else {
                    std::cout << "Queue is empty. Cannot dequeue." << std::endl;
                }
                break;
            case 3:
                if (!que.empty()) {
                    std::cout << "Front element: " << que.front() << std::endl;
                } else {
                    std::cout << "Queue is empty. No front element." << std::endl;
                }
                break;
            case 4:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}

/*
This program demonstrates the implementation of a queue using the std::queue container from the C++ STL.
The user can interact with the queue by choosing various options from a menu, such as enqueueing an element, dequeueing an element,
and displaying the front element.
*/
