/*
Write a C++ program that attempts to open a file and handle the exception if the file does not exist.

Input: Enter the filename to open: xyzw
Output: Error: File not found!

Input: Enter the filename to open: one.cpp
Output: File found!

Input: Enter the filename to open: one.cpppp
Output: Error: File not found!

*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;
    string filename;

    // Prompt the user to enter the filename to open
    cout << "Enter the filename to open: ";
    cin >> filename;

    try {
        // Try opening the file with the specified filename
        file.open(filename);
        if (!file.is_open()) {
            // If the file couldn't be opened, throw a custom exception with an error message
            throw "File not found!";
        }
        // If the file is successfully opened, display a message indicating that the file was found
        cout << "File found!";

        // File processing code goes here
        // (You can add code here to read data from the file or perform other operations)

        // Close the file after processing is done
        file.close();
    } catch (const char* error) {
        // Catch the custom exception and display the error message
        cout << "Error: " << error << endl;
    }

    return 0;
}

/*

This C++ program demonstrates the use of exception handling to handle file input/output errors when opening a file.
The program uses the ifstream class from the <fstream> library to handle input file stream operations.

The user is prompted to enter a filename, and the program attempts to open the file using the filename provided.
If the file is successfully opened, it displays a message indicating that the file was found. The program also includes a placeholder
comment for file processing code, where you can add code to read data from the file or perform other operations.

If the file couldn't be opened (due to a wrong filename or a non-existent file), the program throws a custom exception with the
error message "File not found!". The catch block then catches this exception and displays the error message, informing the user that
the file could not be opened.

The use of exception handling allows the program to handle file-related errors gracefully and provide useful feedback to the user when
encountering problems with file access.

*/


