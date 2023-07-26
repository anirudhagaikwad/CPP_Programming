/*
Conceptual program to define usage of list data structure in STL library.
*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq; // Creating an empty deque of integers.

    // Insert elements at the back of the deque.
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    // Insert elements at the front of the deque.
    dq.push_front(5);
    dq.push_front(2);

    // Output the elements of the deque using range-based for loop.
    cout << "Elements of the deque: ";
    for (int num : dq)
    {
        cout << num << " ";
    }
    cout << endl;

    // Accessing elements at the front and back of the deque.
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // Checking if the deque is empty.
    if (dq.empty())
    {
        cout << "Deque is empty." << endl;
    }
    else
    {
        cout << "Deque is not empty." << endl;
    }

    // Removing elements from the front and back of the deque.
    dq.pop_front();
    dq.pop_back();

    // Output the elements of the deque after removing elements.
    cout << "Elements after pop_front() and pop_back(): ";
    for (int num : dq)
    {
        cout << num << " ";
    }
    cout << endl;

    // Clearing the deque.
    dq.clear();

    // Checking if the deque is empty after clearing.
    if (dq.empty())
    {
        cout << "Deque is empty after clearing." << endl;
    }
    else
    {
        cout << "Deque is not empty after clearing." << endl;
    }

    return 0;
}

/*
The above C++ program demonstrates the use of the deque container in the STL library.
A deque is a double-ended queue that allows efficient insertion and deletion at both ends.

We start by creating an empty deque named dq of integers.
We insert elements into the deque using push_back and push_front functions to add elements at the back and front, respectively.
We use a range-based for loop to output the elements of the deque.
We access the front and back elements using the front and back functions.
We check if the deque is empty using the empty function.
We remove elements from the front and back of the deque using pop_front and pop_back functions.
We output the elements of the deque after removing elements.
We clear the deque using the clear function.
We again check if the deque is empty after clearing.
The program demonstrates various operations that can be performed on a deque, such as insertion, deletion, and access of elements from both ends. It also shows how to check if the deque is empty and clear its contents.

*/



