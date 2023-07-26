/*
You are required to implement a C++ program to calculate the area of a rectangle.
The program should ask the user to enter the length and width of the rectangle.
However, you need to handle the situation where the user might enter invalid input, such as non-numeric values for length and width.
If invalid input is encountered, the program should display an error message and prompt the user to enter valid input.

Input: Enter the length of the rectangle: w
Output: Error: Invalid input. Please enter a valid number.

Input: Enter the length of the rectangle: 12
       Enter the width of the rectangle: as
Output: Error: Invalid input. Please enter a valid number.

Input: Enter the length of the rectangle: 13
       Enter the width of the rectangle: 8
Output: The area of the rectangle is: 104

*/

#include <iostream>
#include <stdexcept> // for std::invalid_argument

using namespace std;

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

int main() {
    double length, width;

    // Prompt user for length until a valid input is provided
    while (true) {
        cout << "Enter the length of the rectangle: ";
        try {
            cin >> length;

            // Check if the input is not a number (invalid)
            if (cin.fail()) {
                cin.clear(); // Clear error flags
                cin.ignore(); // Ignore the invalid input
                throw invalid_argument("Invalid input. Please enter a valid number.");
            }

            break; // Exit the loop if the input is valid
        } catch (const invalid_argument& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }

    // Prompt user for width until a valid input is provided
    while (true) {
        cout << "Enter the width of the rectangle: ";
        try {
            cin >> width;

            // Check if the input is not a number (invalid)
            if (cin.fail()) {
                cin.clear(); // Clear error flags
                cin.ignore(); // Ignore the invalid input
                throw invalid_argument("Invalid input. Please enter a valid number.");
            }

            break; // Exit the loop if the input is valid
        } catch (const invalid_argument& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }

    // Calculate and display the area of the rectangle
    double area = calculateRectangleArea(length, width);
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}

/*
In this program, we will use exception handling to handle any invalid input provided by the user when entering the length and width of the rectangle. We will use the try, catch, and throw blocks to manage the exception flow.

The program will prompt the user to enter the length of the rectangle.
It will then try to read the input as a floating-point number using std::cin.
If the input is successful, the program will continue to prompt the user for the width of the rectangle using a similar approach.
If the input is invalid (e.g., non-numeric), a std::invalid_argument exception will be thrown.
We will use a catch block to handle this exception, display an error message, and ask the user to re-enter the value.

*/


