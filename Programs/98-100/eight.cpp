/*
Given a stack, the task is to sort it such that the top of the stack has the greatest element.


Input: Stack: 3 2 1
Output: 3 2 1

Input: Stack: 11 2 32 3 41
Output: 41 32 11 3 2
*/


#include<iostream>
#include<stack>
#include<set>

using namespace std;

class SortedStack {
public:
    stack<int> s;

    // Function to sort the elements of the stack in ascending order.
    void sort();
};

// Function to print the elements of a stack in LIFO order.
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << "  ";
        s.pop();
    }
    cout << "\n";
}

// Helper function to recursively sort the stack.
void helper(stack<int>& s) {
    if (s.empty())
        return;

    int t = s.top(); // Store the top element of the stack.

    s.pop(); // Remove the top element.

    // Recursively sort the remaining elements in the stack.
    helper(s);

    if (s.empty()) {
        s.push(t); // If the stack is empty now, push the element back into the stack.
        return;
    }

    stack<int> temp; // Create a temporary stack to hold elements temporarily.

    // Move elements from the original stack to the temporary stack until we find the correct position for 't'.
    while (!s.empty() && s.top() > t) {
        temp.push(s.top());
        s.pop();
    }

    s.push(t); // Push 't' into the correct position in the original stack.

    // Move elements back from the temporary stack to the original stack.
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }

    return;
}

// Function to sort the elements of the stack using recursion.
void SortedStack::sort() {
    helper(s); // Call the helper function to perform the sorting.
}

int main() {
    SortedStack *ss = new SortedStack();
    int n;
    cin >> n; // Read the number of elements to be sorted from the user.
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k; // Read each element from the user and push it into the stack.
        ss->s.push(k);
    }

    ss->sort(); // Call the sort function to sort the elements of the stack in ascending order.

    printStack(ss->s); // Print the sorted stack.

    return 0;
}

/*
The given C++ code defines a class SortedStack, which is used to sort elements in a stack in ascending order using recursion.

The SortedStack class contains a member function sort(), which is responsible for sorting the elements of the stack. It also includes a stack s to store the elements.

The helper function helper(stack<int>& s) is a recursive function used to sort the elements in the stack. It follows the following steps:

If the stack is empty, return as there are no elements to sort.
Store the top element of the stack in variable t.
Pop the top element from the stack.
Recursively sort the remaining elements in the stack by calling helper(s).
If the stack is empty now, it means we have reached the end of the recursion. Push the element t back into the stack, and return.
If the stack is not empty, create a temporary stack temp.
Move elements from the original stack to the temporary stack until we find the correct position for t. Elements are moved in descending order, so the largest elements will be at the top of the temporary stack.
Push the element t into the correct position in the original stack.
Move elements back from the temporary stack to the original stack in ascending order.
The recursion will continue until all elements are sorted correctly in the original stack.
The sort() function of the SortedStack class simply calls the helper function to perform the sorting.

In the main function, the user is asked to input the number of elements to be sorted (n) and then the individual elements themselves. Each element is pushed into the stack. After that, the sort() function is called to sort the elements in the stack in ascending order.
Finally, the sorted stack is printed using the printStack function.
*/
