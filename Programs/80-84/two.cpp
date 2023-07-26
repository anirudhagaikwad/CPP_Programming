/*
Write a C++ program that creates an array of integers and attempts to access an element outside the array bounds.
Handle the exception and display an appropriate error message.

Input: Enter an index to access the element: 4
Output: Element at index 4: 5

Input: Enter an index to access the element: -2
Output: Error: Index out of range!

Input: Enter an index to access the element: 8
Output: Error: Index out of range!

*/

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int index;

    // Prompt the user to enter an index to access an element from the array
    cout << "Enter an index to access the element: ";
    cin >> index;

    try {
        // Check if the index is valid (within the array's bounds)
        if (index < 0 || index >= 5) {
            // If the index is invalid, throw a custom exception with an error message
            throw "Index out of range!";
        }
        // If the index is valid, print the element at the specified index
        cout << "Element at index " << index << ": " << arr[index] << endl;
    } catch (const char* error) {
        // Catch the custom exception and display the error message
        cout << "Error: " << error << endl;
    }

    return 0;
}

/*

This C++ program demonstrates the use of exception handling to handle out-of-range access of elements in an array.
The program defines an integer array arr with 5 elements. The user is prompted to enter an index to access an element
from the array.

The program uses a try-catch block to handle the exception. If the user enters an invalid index
(less than 0 or greater than or equal to 5), the catch block catches a custom exception with the error message
"Index out of range!".
Otherwise, if the index is within the valid range, the program prints the element at the specified index.

The use of exception handling allows the program to handle cases where the user tries to access elements outside
the valid index range of the array, preventing potential segmentation faults or undefined behavior.
Instead, it provides a more informative error message to the user.

*/





