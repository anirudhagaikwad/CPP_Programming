/*
Write a C++ program that attempts to allocate memory dynamically and handle the bad_alloc
exception if there is not enough memory available.

Input: int* arr = new int[1000000000]; // Try allocating a large amount of memory
Output: Exception: std::bad_array_new_length

Input: int* arr = new int[10];
Output: Memory allocation successful.

Input: int* arr = new int[999999999999]; // Try allocating a large amount of memory
Output: Exception: std::bad_array_new_length

*/

#include <iostream>
using namespace std;

int main() {
    int* arr;

    try {
        // Try allocating a large amount of memory using 'new'
        arr = new int[999999999999];

        // If the memory allocation is successful, perform some operations
        // (This code is just for illustration purposes since the allocation itself may not be feasible)

        // Free the dynamically allocated memory using 'delete[]' to avoid memory leaks
        delete[] arr;

        cout << "Memory allocation successful." << endl;
    } catch (const bad_alloc& e) {
        // Catch the 'bad_alloc' exception if the memory allocation fails
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

/*

This C++ program demonstrates the use of exception handling to handle memory allocation failures.
The program attempts to dynamically allocate a large amount of memory using the new operator for an integer array.
However, since the requested memory size is excessively large, the allocation will likely fail due to insufficient memory available.

The program uses a try-catch block to handle the exception. If the memory allocation fails (due to bad_alloc exception), the catch block catches
the exception and displays an appropriate error message indicating that the memory allocation was unsuccessful.

In real-world scenarios, allocating such an enormous amount of memory is unlikely to succeed and may cause the program to terminate or crash
due to the system's memory limitations. The code is mainly meant for illustrative purposes to demonstrate how to handle memory allocation
exceptions using exception handling. In practical scenarios, it is essential to handle memory allocations more realistically and efficiently
based on the actual requirements of the program. The try-catch block provides a way to gracefully handle exceptional conditions, such as memory
allocation failures, and allows the program to continue execution without crashing.

*/









