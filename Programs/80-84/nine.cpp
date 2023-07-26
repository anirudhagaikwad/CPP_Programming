/*
Write a C++ program that creates a vector and attempts to access an element outside the vector bounds.
Handle the out_of_range exception.

Input: Enter an index to access the element: 9
Output: Exception: vector::_M_range_check: __n (which is 9) >= this->size() (which is 5)

Input: Enter an index to access the element: 0
Output: Element at index 0: 1

Input: Enter an index to access the element: 2
Output: Element at index 2: 3

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int index;

    cout << "Enter an index to access the element: ";
    cin >> index;

    try {
        // Try accessing the element at the given index using the 'at()' member function
        cout << "Element at index " << index << ": " << vec.at(index) << endl;
    } catch (const out_of_range& e) {
        // Catch the 'out_of_range' exception if the index is invalid (out of vector's bounds)
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

/*

This C++ program demonstrates the use of exception handling to handle out-of-range access of elements in a vector.
The program creates a vector vec containing integers and prompts the user to enter an index to access an element.
It then tries to access the element using the at() member function, which throws an out_of_range exception if the
index is invalid (out of the vector's bounds). The caught exception is then handled, and an appropriate error message
is displayed, indicating that the user tried to access an element outside the valid index range of the vector.

*/


