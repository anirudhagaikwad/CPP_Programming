/*
 Create a class Stack to implement a basic stack with push, pop, and display methods.
*/

#include <iostream>

const int MAX_SIZE = 5;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int value) {
        if (!isFull()) {
            arr[++top] = value;
        } else {
            std::cout << "Stack Overflow!" << std::endl;
        }
    }

    void pop() {
        if (!isEmpty()) {
            --top;
        } else {
            std::cout << "Stack Underflow!" << std::endl;
        }
    }

    void display() {
        std::cout << "Stack Contents: ";
        for (int i = top; i >= 0; --i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display(); // Output: Stack Contents: 30 20 10
    stack.pop();
    stack.display(); // Output: Stack Contents: 20 10
    return 0;
}

/*
This program defines a class Stack to implement a basic stack using an array. The stack has methods for push, pop, and display operations.
*/

