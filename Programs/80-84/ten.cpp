/*
You are tasked with writing a C++ program that checks if the user has entered a correct numeric value.
Your program should prompt the user to enter a numeric value, and it should verify if the input is a valid numeric value.
If the input is numeric, the program should display a message confirming that the input is correct.
However, if the user enters an invalid input (non-numeric value), your program should raise an exception and display an error
message indicating that the input is not numeric.


Input: Enter a numeric value: 483753489
Output: Valid numeric input.

Input: Enter a numeric value: ewj32
Output: Exception: Invalid input: Not a numeric value!

*/

#include <iostream>
#include <string>
using namespace std;

// Function to check if a given string contains a numeric value
bool isNumeric(const string& str) {
    size_t i = 0;
    bool hasDecimal = false;

    // Check for optional '+' or '-' sign at the beginning of the string
    if (str[i] == '+' || str[i] == '-')
        i++;

    // Iterate through the remaining characters to check if they are digits or a decimal point
    while (i < str.length()) {
        if (isdigit(str[i])) {
            i++;
        } else if (str[i] == '.' && !hasDecimal) {
            hasDecimal = true;
            i++;
        } else {
            return false;
        }
    }

    return true;
}

int main() {
    string input;

    cout << "Enter a numeric value: ";
    cin >> input;

    try {
        if (isNumeric(input)) {
            cout << "Valid numeric input." << endl;
        } else {
            throw "Invalid input: Not a numeric value!";
        }
    } catch (const char* error) {
        cout << "Exception: " << error << endl;
    }

    return 0;
}

/*
This C++ program demonstrates the use of exception handling to check if the user input is a numeric value. The program defines a function isNumeric that takes a string as input and checks if the string represents a valid numeric value.

The user is prompted to enter a value, and the program reads it as a string. The isNumeric function is then called to check if the entered string contains a valid numeric value.

The isNumeric function iterates through the characters of the string, allowing for an optional '+' or '-' sign at the beginning. It then checks if the remaining characters are all digits or a single decimal point. If the string meets these conditions, it is considered a numeric value, and the function returns true. Otherwise, it returns false.

In the main function, the program uses a try-catch block to handle exceptions. If the user enters a string that does not represent a numeric value, the program throws a custom exception with the error message "Invalid input: Not a numeric value!".

If the input is valid (numeric), the program prints a message indicating that the input is a valid numeric value. Otherwise, if the input is invalid, the catch block catches the custom exception and displays the error message.

The use of exception handling allows the program to provide informative feedback to the user when they input a non-numeric value, ensuring that the program does not proceed with potentially incorrect or undesired results.

*/


