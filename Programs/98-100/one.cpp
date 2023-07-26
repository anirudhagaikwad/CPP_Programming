/*
Given a Queue Q containing N elements. The task is to reverse the Queue.
Your task is to complete the function rev(), that reverses the N elements of the queue.

Example 1:

Input:
6
4 3 1 10 2 6
Output:
6 2 10 1 3 4
*/

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Function to reverse the queue.
class Solution {
public:
    queue<int> rev(queue<int> q) {
        stack<int> st;

        // Push all elements of the queue into the stack.
        while (!q.empty()) {
            st.push(q.front());
            q.pop();
        }

        // Pop elements from the stack and push them back into the queue to reverse the order.
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }

        return q; // Return the reversed queue.
    }
};

int main() {
    queue<int> q;
    int n, var;
    cin >> n; // Read the number of elements in the queue from the user.

    // Read each element of the queue from the user and push it into the queue.
    while (n--) {
        cin >> var;
        q.push(var);
    }

    Solution ob;
    queue<int> a = ob.rev(q); // Call the rev function to reverse the queue.

    // Print the elements of the reversed queue.
    while (!a.empty()) {
        cout << a.front() << " ";
        a.pop();
    }
    cout << endl;

    return 0;
}

/*
The given C++ code defines a class Solution with a member function rev that reverses a queue of integers.

The Solution class contains a member function rev, which takes a queue q as input and returns a reversed queue.

The rev function reverses the elements of the input queue using a stack.
It first creates an empty stack st to temporarily store the elements.
Then, it iterates through the input queue, popping elements from the front of the queue and pushing them into the stack st. This process effectively reverses the order of elements.

After pushing all elements from the queue to the stack, the function starts emptying the stack and pushing the elements back into the queue. This step is crucial to reverse the order of elements from the stack and restore the original order in the queue. The function finally returns the reversed queue.

In the main function, the user is asked to input the number of elements in the queue (n) and the elements themselves. The rev function of the Solution class is then called with the input queue to reverse it. The reversed queue is printed to the console, displaying the elements in reverse order compared to the input.


*/
