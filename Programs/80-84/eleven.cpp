/*
Write a C++ program that takes two floating-point numbers as input and attempts to calculate their difference.
Handle the underflow_error exception if the result is too close to zero.

Input: Enter two numbers: 9 9
Output: Exception: Underflow error!

Input: Enter two numbers: 12 5
Output: Difference: 7

Input: Enter two numbers: 12 19
Output: Difference: -7

*/

#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    double num1, num2, difference;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        difference = num1 - num2;
        if (fabs(difference) < numeric_limits<double>::epsilon()) {
            throw underflow_error("Underflow error!");
        }
        cout << "Difference: " << difference << endl;
    } catch (const underflow_error& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

/*
This C++ program demonstrates the use of exception handling to handle underflow errors during the subtraction of two
floating-point numbers. The user is prompted to input two numbers, and the program calculates their difference.
If the absolute value of the difference is very close to zero (within the range of epsilon for the double data type),
it throws an underflow_error exception with the message "Underflow error!". The caught exception is then handled, and
an appropriate error message is displayed, indicating that the subtraction operation resulted in an underflow error
due to a very small difference between the numbers.

*/

