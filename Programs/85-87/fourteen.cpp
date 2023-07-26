/*
You are working on a C++ program that involves accessing elements of a vector.
Your task is to implement exception handling to catch the scenario when an attempt is made to access an element outside the valid range of the vector.


Input: vector<int> numbers;
       numbers.at(10) = 42; // Should throw "std::out_of_range" exception

Output: Out of range exception: vector::_M_range_check: __n (which is 10) >= this->size() (which is 0)

*/

#include <iostream>
#include <vector>

int main() {
    try {
        std::vector<int> numbers;
        numbers.at(2) = 42; // Should throw "std::out_of_range" exception
    }
    catch (const std::out_of_range& ex) {
        std::cout << "Out of range exception: " << ex.what() << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << "Other exception: " << ex.what() << std::endl;
    }

    return 0;
}

/*
The provided C++ program aims to demonstrate the use of exception handling when accessing elements of a vector using the std::vector::at function. The program attempts to access an element at index 10 in an empty vector, which is out of the valid range.

Your task is to understand the exception handling mechanism in the program:

Inside the main function, a vector numbers is declared without any elements.

In the try block, the program tries to access the element at index 10 of the vector using the numbers.at(10) syntax. Since the vector is empty and does not have an element at index 10, the std::vector::at function throws a std::out_of_range exception.

The catch block specific to std::out_of_range catches the exception and stores it in the ex variable, which is of type const std::out_of_range&. The function then displays an error message indicating that the exception is an "Out of range exception" and prints the message returned by ex.what().

There is another catch block that catches any exception derived from std::exception (including std::out_of_range). If an exception other than std::out_of_range is thrown, it is caught here. The caught exception is stored in the ex variable, and its error message is displayed using ex.what().

Your final task is to observe the behavior of the program during the execution and understand how the out-of-range exception is handled. Focus on how the program behaves when attempting to access an element outside the valid range of the vector.

*/

