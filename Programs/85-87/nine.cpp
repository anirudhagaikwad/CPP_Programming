/*
 Your task is toThrow an exception in a function and handle it in the main function.

 Input: performOperation();
 Output: Error: Exception occurred during operation!


 */

#include <iostream>

// Function to perform an operation that may throw an exception
void performOperation() {
    // Some code that may throw an exception
    throw std::runtime_error("Exception occurred during operation!");
}

int main() {
    try {
        // Attempt to perform the operation which may throw an exception
        performOperation();
    }
    catch (const std::exception& ex) {
        // Catch and handle any exception that derives from std::exception
        // Print the error message associated with the caught exception
        std::cout << "Error: " << ex.what() << std::endl;
    }

    return 0;
}

/*
The provided C++ program demonstrates the use of exception handling to catch and handle an exception that may occur during the execution of an operation. The operation is performed within the function performOperation().

The performOperation() function simulates a critical operation that may encounter an exception. In this example, we are throwing a std::runtime_error exception with the error message "Exception occurred during operation!".

In the main function, we attempt to call the performOperation() function within a try-catch block. The code within the try block represents the operation we want to execute. However, since the performOperation() function throws an exception, the control flow jumps directly to the appropriate catch block if an exception occurs.

The catch block (catch (const std::exception& ex)) catches the exception and stores it in the ex variable, which is of type const std::exception&. This catch block will catch any exception that derives from std::exception, including the std::runtime_error exception that we are throwing.

In the catch block, we then display an error message using std::cout. The ex.what() function returns the error message associated with the caught exception, which, in this case, is "Exception occurred during operation!".

*/


