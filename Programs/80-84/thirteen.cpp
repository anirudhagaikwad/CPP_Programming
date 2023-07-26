/*
Write a C++ program that calculates the square root of a number. If the user inputs a negative number, throw an exception.
Catch the exception in the main program and re-throw it with an additional message.

Input: Enter a number: 4
Output: Square root: 2

Input: Enter a number: -6
Output: Exception: Negative number!

Input: Enter a number: 0
Output: Square root: 0

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0) {
            throw "Negative number!";
        }
        cout << "Square root: " << sqrt(num) << endl;
    } catch (const char* error) {
        cout << "Exception: " << error << endl;
        throw; // Re-throw the exception
    }

    return 0;
}

/*
This C++ program demonstrates the use of exception handling to calculate the square root of a number.
The user is prompted to input a number, and if the number is negative, the program throws a custom exception
with the message "Negative number!" The caught exception is then handled, and an appropriate error message is
displayed. Additionally, the program uses the throw; statement to re-throw the caught exception,
allowing it to be handled at a higher level in the program if needed.

*/

