/*
You are working on a C++ program that processes elements of a vector using the std::for_each algorithm.
Your task is to implement a function that processes each element of the vector and handles negative values with proper exception handling.

Input: numbers = {1, -2, 3, -4, 5}
Output: 1 Exception: Negative value found!

Input: numbers = {1, 2, 3, 4, 5}
Output: 1 2 3 4 5

Input: numbers = {1, 2, 3, 4, -5}
Output: 1 2 3 4 Exception: Negative value found!

*/

#include <iostream>
#include <algorithm>
#include <vector>

void processVectorElement(int value) {
    if (value < 0) {
        throw std::runtime_error("Negative value found!");
    }
    std::cout<<value<<" ";
}

int main() {
    std::vector<int> numbers = {1, -2, 3, -4, 5};

    try {
        std::for_each(numbers.begin(), numbers.end(), processVectorElement);
    }
    catch (const std::exception& ex) {
        std::cout << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}

/*

The provided C++ program demonstrates the use of the std::for_each algorithm to process elements of a vector. The processVectorElement function is designed to process each element of the vector and handle negative values with exception handling.

Your task is to understand the program's flow and the exception handling mechanism:

The processVectorElement function takes an integer value as a parameter.

Inside the function, there is a check to see if the value is negative (i.e., less than 0). If the value is negative, the function throws a std::runtime_error with the error message "Negative value found!".

If the value is non-negative (positive or zero), the function proceeds with processing the positive value. You can add relevant processing logic in the comment section indicated by "// Process positive value".

In the main function, a vector numbers is initialized with integer values, including negative values.

Inside the try block of the main function, the std::for_each algorithm is used to apply the processVectorElement function to each element of the numbers vector. This is done by passing the function as the third argument to std::for_each. The algorithm applies the function to each element, one by one.

During the execution of std::for_each, if the processVectorElement function encounters a negative value in the vector, it throws a std::runtime_error exception.

In the catch block of the main function, any exception derived from std::exception (including std::runtime_error) is caught. The caught exception is stored in the ex variable, and its error message is displayed using ex.what().

*/



