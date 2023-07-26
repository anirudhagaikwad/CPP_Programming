/*
You are developing a C++ program that performs division operations on two user-input integers.
However, some scenarios require special handling of errors during the division process.
Your task is to implement the division function with proper exception handling to address two specific error scenarios: division by zero
and non-integer result.

Input: Enter two numbers: 5 0
Output: Runtime Error: Division by zero!

Input: Enter two numbers: 8734444444444444444444444444 u48222222222222222
Output: Logic Error: Non-integer result!

 */

#include <iostream>

void divideNumbers(int dividend, int divisor) {
    if (divisor == 0) {
        throw std::runtime_error("Division by zero!");
    }
    else if (dividend % divisor != 0) {
        throw std::logic_error("Non-integer result!");
    }
    else {
        std::cout << "Result: " << dividend / divisor << std::endl;
    }
}

int main() {
    try {
        int num1, num2;
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        divideNumbers(num1, num2);
    }
    catch (const std::runtime_error& ex) {
        std::cout << "Runtime Error: " << ex.what() << std::endl;
    }
    catch (const std::logic_error& ex) {
        std::cout << "Logic Error: " << ex.what() << std::endl;
    }

    return 0;
}

/*
The provided C++ program aims to perform division operations on two integers with proper error handling. The divideNumbers function takes two integer parameters dividend and divisor and attempts to perform the division.

Your task is to define the divideNumbers function to handle the following error scenarios:

Division by Zero: If the divisor is equal to zero, the function should throw a std::runtime_error with the error message "Division by zero!" to indicate that the division is not possible.

Non-Integer Result: If the division of dividend by divisor does not result in an integer value (i.e., there is a remainder), the function should throw a std::logic_error with the error message "Non-integer result!" to indicate that the result is not an integer.

In the main function, prompt the user to enter two integer numbers num1 and num2. Then, call the divideNumbers function with these inputs to perform the division. Implement a try-catch block to catch any exceptions that may be thrown during the division.

In the catch blocks, differentiate between std::runtime_error and std::logic_error exceptions. Print appropriate error messages for each case:

If a std::runtime_error is caught, display "Runtime Error: " followed by the exception's error message (ex.what()).
If a std::logic_error is caught, display "Logic Error: " followed by the exception's error message (ex.what()).

*/


