/*
Write a C++ program that implements a user-defined exception hierarchy for different types of errors encountered during
a mathematical operation. The hierarchy should include specific exceptions for divide by zero and invalid operation.

Input: Select an operation (1: Add, 2: Subtract, 3: Multiply, 4: Divide): 1
       Enter two numbers: 4 7
Output: Result: 11


Input: Select an operation (1: Add, 2: Subtract, 3: Multiply, 4: Divide): 7
       Enter two numbers: 4 3
Output: Exception: Invalid mathematical operation!

Input: Select an operation (1: Add, 2: Subtract, 3: Multiply, 4: Divide): 4
       Enter two numbers: 9 0
Output: Exception: Division by zero is not allowed!


*/

#include <iostream>
#include <cmath>
using namespace std;

class DivideByZeroException : public exception {
public:
    const char* what() const throw() {
        return "Division by zero is not allowed!";
    }
};


class InvalidOperationException : public exception {
public:
    const char* what() const throw() {
        return "Invalid mathematical operation!";
    }
};

int main() {
    int choice;
    double num1, num2, result;

    cout << "Select an operation (1: Add, 2: Subtract, 3: Multiply, 4: Divide): ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        switch (choice) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                if (num2 == 0) {
                    throw DivideByZeroException();
                }
                result = num1 / num2;
                break;
            default:
                throw InvalidOperationException();
        }
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

/*
This C++ program demonstrates the use of custom exception classes to handle different types of mathematical operations. It defines three custom exception classes: DivideByZeroException, SqrtOfNegativeException, and InvalidOperationException, each inheriting from the standard exception class.

The program prompts the user to select an operation (addition, subtraction, multiplication, or division) and input two numbers. It then performs the selected operation and handles any exceptions that may arise.

If the user selects division and tries to divide by zero, the program throws a DivideByZeroException.
If the user selects division and enters a negative number as the second operand, the program throws a SqrtOfNegativeException.
If the user selects an invalid operation, such as a number other than 1, 2, 3, or 4, the program throws an InvalidOperationException.
The caught exceptions are then handled, and an appropriate error message is displayed, indicating the type of exception encountered during the mathematical operation.

*/
