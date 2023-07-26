/*
Implement a stack data structure using the STL library in C++.
Create a menu-driven program that allows the user to perform the following operations: push an element onto the stack, pop an element from the stack,
and display the top element of the stack.
*/

#include <iostream>
#include <stack>

int main() {
    std::stack<int> stk;
    int choice, element;

    do {
        std::cout << "1. Push an element" << std::endl;
        std::cout << "2. Pop an element" << std::endl;
        std::cout << "3. Display top element" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter element to push: ";
                std::cin >> element;
                stk.push(element);
                break;
            case 2:
                if (!stk.empty()) {
                    stk.pop();
                    std::cout << "Element popped successfully." << std::endl;
                } else {
                    std::cout << "Stack is empty. Cannot pop." << std::endl;
                }
                break;
            case 3:
                if (!stk.empty()) {
                    std::cout << "Top element: " << stk.top() << std::endl;
                } else {
                    std::cout << "Stack is empty. No top element." << std::endl;
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
This program demonstrates the implementation of a stack using the std::stack container from the C++ STL.
The user can interact with the stack by choosing various options from a menu, such as pushing an element, popping an element,
and displaying the top element

*/













