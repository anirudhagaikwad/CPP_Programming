/*
Write a C++ program that creates a string and attempts to access an out-of-range element.
Handle the length_error exception.

str = "Hello, world!";

Input: Enter an index to access the character: 9
Output: Character at index 9: r

Input: Enter an index to access the character: 13
Output: Exception: Index out of range!

Input: Enter an index to access the character: 21
Output: Exception: Index out of range!

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, world!";
    int index;

    cout << "Enter an index to access the character: ";
    cin >> index;

    try {
        // Check if the index is valid (within the string's bounds)
        if (index < 0 || index >= str.length()) {
            // If the index is invalid, throw a 'length_error' exception with a corresponding message
            throw length_error("Index out of range!");
        }
        // If the index is valid, print the character at the specified index
        cout << "Character at index " << index << ": " << str[index] << endl;
    } catch (const length_error& e) {
        // Catch the 'length_error' exception if the index is out of range
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

/*

This C++ program demonstrates the use of exception handling to handle out-of-range access of characters in a string.
The program defines a string str and prompts the user to enter an index to access a character from the string.
It then checks if the entered index is valid (i.e., it should be greater than or equal to zero and less than
the string's length). If the index is not within the valid range, it throws a length_error exception with the message
"Index out of range!".

The program uses a try-catch block to handle the exception.
If the user enters an invalid index, the catch block catches the length_error exception, and an appropriate
error message is displayed, indicating that the index is out of the valid range of the string. Otherwise,
if the index is valid, the program prints the character at the specified index.

*/


