/*
As part of the app's development, you are tasked with creating a function template to find the maximum of two numbers.
This function should be flexible enough to handle different data types, allowing users to compare integers, floating-point numbers,
and even custom data types effortlessly.

Input: x = 5, y = 10
Output: Max: 10

Input: x = 3.14, y = 2.71
Output: Max: 3.14

Input: x='A', y='Z'
Output:Max: Z

*/

#include <iostream>
using namespace std;

// Function template 'findMax' takes two parameters of the same type 'T' and returns the maximum value among them.
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 5, y = 10;
    cout << "Max: " << findMax(x, y) << endl;        // Output: Max: 10
    double a = 3.14, b = 2.71;
    cout << "Max: " << findMax(a, b) << endl;        // Output: Max: 3.14


    // The function template also works with other data types, like characters.
    char ch1 = 'A', ch2 = 'Z';
    cout << "Max: " << findMax(ch1, ch2) << endl;    // Output: Max: Z

    return 0;
}

// This C++ program demonstrates the use of a function template to find the maximum of two numbers of any data type.
// The template function 'findMax' can handle integers, floating-point numbers, and other custom data types effortlessly.
