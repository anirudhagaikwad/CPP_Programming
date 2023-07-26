/*
 You are developing a scientific calculator application that performs various mathematical operations, including division.
 Your task is to implement division functionality while handling the case when the user attempts to divide a number by zero
 by catching exceptions at different levels.

Input: Enter two numbers: 6 2
Output: Result: 3

Input: Enter two numbers: 7 0
Output: Inner Exception: Division by zero!

Input: Enter two numbers: 0 0
Output: Inner Exception: Division by zero!

*/


#include <iostream>

int divideNumbers(int dividend, int divisor) {
    if (divisor == 0) {
        throw std::runtime_error("Division by zero!");
    }
    return dividend / divisor;
}

int main() {
    try {
        int num1, num2;
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        try {
            int result = divideNumbers(num1, num2);
            std::cout << "Result: " << result << std::endl;
        }
        catch (const std::runtime_error& ex) {
            std::cout << "Inner Exception: " << ex.what() << std::endl;
        }
    }
    catch (const std::exception& ex) {
        std::cout << "Outer Exception: " << ex.what() << std::endl;
    }

    return 0;
}

/*
The provided C++ program represents a simplified version of a scientific calculator that handles division by zero exceptions.
The program takes two integer inputs from the user and calculates the result of their division.
However, if the user tries to divide a number by zero, the program should throw a custom exception indicating the error.

To solve this problem, create a custom exception class called DivisionByZeroException that inherits from std::exception.
This custom exception class should provide an appropriate error message when the division by zero situation occurs.

In the divideNumbers function, check if the divisor is zero. If it is, throw the DivisionByZeroException with the appropriate error message.

In the main function, prompt the user to enter two numbers and attempt to calculate their division using the divideNumbers function.
If the division operation encounters a division by zero situation, catch the DivisionByZeroException in the inner catch block and print the
corresponding error message.

*/



