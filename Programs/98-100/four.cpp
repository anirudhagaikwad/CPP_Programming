/*
Implement a priority queue data structure using the STL library in C++.
Create a menu-driven program that allows the user to perform the following operations: enqueue an element into the priority queue,
dequeue an element from the priority queue, and display the top element of the priority queue.
*/

#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq; // Create a priority queue of integers.

    int choice, element;

    do {
        // Display the menu for user interaction.
        std::cout << "1. Enqueue an element" << std::endl;
        std::cout << "2. Dequeue an element" << std::endl;
        std::cout << "3. Display top element" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice; // Read the user's choice.

        switch (choice) {
            case 1:
                std::cout << "Enter element to enqueue: ";
                std::cin >> element; // Read the element to be enqueued from the user.
                pq.push(element); // Enqueue the element into the priority queue.
                break;
            case 2:
                if (!pq.empty()) {
                    pq.pop(); // Dequeue the top element from the priority queue.
                    std::cout << "Element dequeued successfully." << std::endl;
                } else {
                    std::cout << "Priority queue is empty. Cannot dequeue." << std::endl;
                }
                break;
            case 3:
                if (!pq.empty()) {
                    std::cout << "Top element: " << pq.top() << std::endl; // Display the top element of the priority queue.
                } else {
                    std::cout << "Priority queue is empty. No top element." << std::endl;
                }
                break;
            case 4:
                std::cout << "Exiting program." << std::endl; // Exit the program.
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl; // Display an error message for invalid choices.
        }
    } while (choice != 4); // Continue the loop until the user chooses to exit (choice = 4).

    return 0;
}


/*
This program demonstrates the implementation of a priority queue using the std::priority_queue container from the C++ STL.
The user can interact with the priority queue by choosing various options from a menu, such as enqueueing an element, dequeueing an element,
and displaying the top element.
*/
