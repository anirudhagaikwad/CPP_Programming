/*
Write a C++ program that performs mathematical operations and handles the logic_error exception for invalid calculations.

Input: Enter two numbers: 5 0
Output: Exception: Invalid input for division or logarithm!

Input: Enter two numbers: 7 3
Output: Division Result: 2
        Logarithm Result: 1.09861

Input: Enter two numbers: 0 0
Output: Exception: Invalid input for division or logarithm!

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    double result;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        if (num2 <= 0) {
            throw logic_error("Invalid input for division or logarithm!");
        }

        // Perform mathematical operations
        result = num1 / num2;
        cout << "Division Result: " << result << endl;

        result = log(num2);
        cout << "Logarithm Result: " << result << endl;
    } catch (const logic_error& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

/*
This C++ program demonstrates the use of exception handling to handle invalid input during mathematical operations.
The user is asked to input two numbers, and the program performs division and logarithm calculations on these numbers.
If the second number is less than or equal to zero, it throws a logic_error exception with a corresponding error message.
The caught exception is then handled, and an appropriate error message is displayed, indicating the invalid input for division or logarithm.

*/


