/*
You are a software engineer named Emily, working for a thriving online bookstore that aims to provide an exceptional
shopping experience for book enthusiasts. As part of the platform's development, you have been assigned a crucial task:
to create a class template for a Stack data structure.
*/

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
private:
    vector<T> data;

public:
    void push(T value) {
        data.push_back(value);
    }

    void pop() {
        if (!data.empty()) {
            data.pop_back();
        }
    }

    T top() {
        if (!data.empty()) {
            return data.back();
        }
        throw runtime_error("Stack is empty!");
    }

    bool empty() {
        return data.empty();
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(5);
    intStack.push(10);
    cout << "Top element: " << intStack.top() << endl;   // Output: Top element: 10
    intStack.pop();
    cout << "Top element after pop: " << intStack.top() << endl;  // Output: Top element after pop: 5

    Stack<string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    cout << "Top element: " << strStack.top() << endl;   // Output: Top element: World
    return 0;
}

/*
This C++ program implements a generic Stack data structure using a class template. The Stack class template is designed to store elements of any data type and provides essential stack operations, including push, pop, top, and checking for emptiness.

The Stack class template is defined with a private member variable data, which is a vector<T> representing the underlying container to hold the stack elements. The use of vector allows for dynamic resizing of the stack as elements are added or removed.

The public member functions of the Stack class template include:

push(T value): This function takes a parameter value of type T and adds it to the top of the stack by using the push_back method of the underlying vector.

pop(): This function removes the top element from the stack using the pop_back method of the underlying vector. It first checks if the stack is not empty before attempting to remove an element to avoid any errors.

top(): This function returns the value of the top element of the stack by using the back method of the underlying vector. If the stack is empty, it throws a runtime_error to indicate that the stack is empty.

empty(): This function checks if the stack is empty by using the empty method of the underlying vector and returns true if the stack is empty; otherwise, it returns false.

In the main() function, two instances of the Stack class template are created: intStack to store integers and strStack to store strings. Elements are added to both stacks using the push method, and the top element of each stack is retrieved using the top method. The pop method is also demonstrated by removing an element from the intStack.
*/
