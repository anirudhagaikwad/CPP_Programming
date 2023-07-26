/*
Write a C++ program that takes two integers as input and performs division operation.
Handle the exception when the user tries to  divide by zero and display an appropriate error message.

Input: Enter two numbers: 8 0
Output: Error: Division by zero is not allowed!

Input: Enter two numbers: 84 12
Output: Result: 7

Input: Enter two numbers: 3 0
Output: Error: Division by zero is not allowed!

Input: Enter two numbers: 0 3
Output: Result: 0

*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        // Check if the second number is zero (to avoid division by zero)
        if (num2 == 0) {
            // If the second number is zero, throw a custom exception with an error message
            throw "Division by zero is not allowed!";
        }
        // If the second number is not zero, perform the division and display the result
        cout << "Result: " << num1 / num2 << endl;
    } catch (const char* error) {
        // Catch the custom exception and display the error message
        cout << "Error: " << error << endl;
    }

    return 0;
}

/*

This C++ program demonstrates the use of exception handling to handle division by zero. The user is prompted
to input two numbers. The program then checks if the second number (denominator) is zero. If it is, the program
throws a custom exception with the error message "Division by zero is not allowed!".

The program uses a try-catch block to handle the custom exception. If the user enters zero as the second number,
the catch block catches the exception and displays the error message. Otherwise, if the second number is non-zero,
the program performs the division and displays the result.

The use of exception handling allows the program to gracefully handle the case when the user attempts to divide
by zero, preventing a runtime error and providing a more informative error message to the user.

*/


