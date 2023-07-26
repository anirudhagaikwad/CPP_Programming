/*
Write a program to swap two numbers without using a third variable.

Example:
Before swapping: a = 5, b = 10
After swapping: a = 10, b = 5

*/

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}

/*
This program swaps the values of two numbers without using a third variable, using arithmetic operations.
*/
