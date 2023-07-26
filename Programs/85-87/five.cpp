/*
You are developing a data backup and recovery application that processes critical data files for backup purposes.
Your task is to implement a file processing function that handles any errors encountered during the backup process and ensures that the
main application can log and respond appropriately to these errors.

Input:
throw runtime_error("File error occurred!")

Output:
Caught exception: File error occurred!
Main caught exception: File error occurred!

*/

#include <iostream>

void processFile() {
    try {
        // Some file processing code
        throw std::runtime_error("File error occurred!");
    }
    catch (const std::exception& ex) {
        std::cout << "Caught exception: " << ex.what() << std::endl;
        throw; // Rethrow the caught exception
    }
}

int main() {
    try {
        processFile();
    }
    catch (const std::exception& ex) {
        std::cout << "Main caught exception: " << ex.what() << std::endl;
    }

    return 0;
}

/*
The provided C++ program represents a simplified version of the data backup and recovery application, where the processFile function simulates file processing for backup. In this scenario, we will consider a situation where a file processing error occurs while attempting to backup a critical data file.

To solve this problem, create a custom exception class called FileProcessingException that inherits from std::exception. This custom exception class should carry relevant information about the file being processed and the type of error that occurred during the backup process.

Inside the processFile function, simulate file processing code that encounters a file error, such as a corrupted file or a file that is currently in use by another application. When the error occurs, throw a FileProcessingException with a meaningful error message and context information.

In the catch block of the processFile function, catch the std::exception and print the caught exception's message along with any additional information about the file processing error. After printing the exception details, rethrow the caught exception using throw; to ensure that the main application can also handle the error.

In the main function, call the processFile function to initiate the file processing for backup. If an exception occurs during the file processing, catch the FileProcessingException in the main catch block and log the error message. Additionally, handle any other unexpected exceptions with the general std::exception catch block and display a generic error message indicating the issue.

*/

