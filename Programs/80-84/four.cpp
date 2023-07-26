/*
Write a C++ program that takes an integer as input and throws a custom exception if the number is negative.

Input: Enter a positive number: 75
Output: Number is positive.

Input: Enter a positive number: -3242
Output: Exception: Negative numbers not allowed!

Input: Enter a positive number: -1
Output: Exception: Negative numbers not allowed!

*/

#include <iostream>
using namespace std;

class NegativeNumberException : public exception {
public:
    const char* what() const throw() {
        return "Negative numbers not allowed!";
    }
};

int main() {
    int num;

    // Prompt the user to enter a positive number
    cout << "Enter a positive number: ";
    cin >> num;

    try {
        // Check if the entered number is negative
        if (num < 0) {
            // If the number is negative, throw a custom exception with an error message
            throw NegativeNumberException();
        }
        // If the number is positive, display a message indicating that it is positive
        cout << "Number is positive." << endl;
    } catch (const exception& e) {
        // Catch the custom exception and display the error message
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

/*

This C++ program demonstrates the use of custom exception handling to handle negative numbers input by the user.
The program defines a custom exception class NegativeNumberException that inherits from the standard exception class provided by the
C++ Standard Library.

The user is prompted to enter a positive number, and the program checks if the entered number is negative. If the number is negative,
the program throws a custom exception with the error message "Negative numbers not allowed!".

The program uses a try-catch block to handle the custom exception. If the user enters a negative number, the catch block catches the
NegativeNumberException exception and displays the error message. Otherwise, if the number is positive, the program prints a message
indicating that the number is positive.

The use of exception handling allows the program to handle cases where the user enters negative numbers and provides a specific error
message for that situation. It helps to provide a more informative response to the user when they input an invalid value, such as a
negative number, instead of allowing the program to proceed with potentially incorrect or undesired results.
*/



