/*
Write a C++ program that takes a character as input and performs different actions based on its value.
Handle exceptions for invalid input characters.

Input: Enter a character: 9
Output: Error: Invalid input: Numeric digit!

Input: Enter a character: a
Output: You entered a lowercase alphabet.

Input: Enter a character: A
Output: You entered an uppercase alphabet.

*/

#include <iostream>
using namespace std;

int main() {
    char ch;

    // Prompt the user to enter a character
    cout << "Enter a character: ";
    cin >> ch;

    try {
        // Check if the character is a numeric digit
        if (isdigit(ch)) {
            // If the character is a digit, throw a custom exception with an error message
            throw "Invalid input: Numeric digit!";
        }
        // Check if the character is an alphabet
        else if (isalpha(ch)) {
            // If the character is an alphabet, check if it is lowercase or uppercase
            if (islower(ch)) {
                cout << "You entered a lowercase alphabet." << endl;
            } else {
                cout << "You entered an uppercase alphabet." << endl;
            }
        }
        // If the character is neither a digit nor an alphabet, throw a custom exception
        else {
            throw "Invalid input: Not an alphabet!";
        }
    } catch (const char* error) {
        // Catch the custom exception and display the error message
        cout << "Error: " << error << endl;
    }

    return 0;
}

/*
This C++ program demonstrates the use of exception handling to handle different types of character inputs.
The user is prompted to enter a character, and the program performs different checks on the input character using the standard library functions
isdigit() and isalpha().

If the character entered by the user is a numeric digit, the program throws a custom exception with the error message
"Invalid input: Numeric digit!".

If the character is an alphabet, the program checks whether it is lowercase or uppercase and prints the corresponding message.

If the character is neither a digit nor an alphabet, the program throws a custom exception with the error message
"Invalid input: Not an alphabet!".

The program uses a try-catch block to handle the custom exceptions. If the user enters a character that falls into any of the above cases,
the catch block catches the respective custom exception and displays the error message. Otherwise, if the character is valid (an alphabet
character), the program prints the appropriate message based on whether it is uppercase or lowercase.

The use of exception handling allows the program to gracefully handle invalid character inputs and provide informative error messages to
the user for better user interaction and error handling.

*/



