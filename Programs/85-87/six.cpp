/*

Your task is to implement a FileHandler class that efficiently handles file operations and exceptions while ensuring that the log files are properly
closed in case of any errors.

Input: FileHandler file(<<valid file_name>>);
       file.writeData("Hello, RAII!");
Output: Writing operation successful!


Input: FileHandler file(<<blank>>);
       file.writeData("Hello, RAII!");
Output: Error: Cannot open file:


*/

#include <iostream>
#include <fstream>

class FileHandler {
private:
    std::ofstream file;

public:
    FileHandler(const std::string& filename) : file(filename) {
        if (!file.is_open()) {
            throw std::runtime_error("Cannot open file: " + filename);
        }
    }

    void writeData(const std::string& data) {
        file << data;
        std::cout<<"Writing operation successful!" ;
    }

    ~FileHandler() {
        file.close();
    }
};

int main() {
    try {
        //FileHandler file(""); // throws error!
        FileHandler file("output.txt");
        file.writeData("Hello, RAII!");

        // Some more code here
    }
    catch (const std::runtime_error& ex) {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    return 0;
}

/*
The FileHandler class is responsible for managing file operations, and it is designed to follow the Resource Acquisition Is Initialization (RAII) principle. The FileHandler constructor opens a log file for writing, and the destructor ensures that the file is properly closed when the FileHandler object goes out of scope.

To solve this problem, implement the FileHandler class with the following functionalities:

The constructor of the FileHandler class takes a filename parameter and attempts to open the file for writing using std::ofstream. If the file cannot be opened (e.g., due to permissions or a non-existing path), throw a std::runtime_error with an appropriate error message indicating the issue.

The writeData function should allow writing data (e.g., sensor readings, events, or status updates) to the log file. It should simply write the given data to the log file using the << operator.

The destructor of the FileHandler class should be responsible for closing the log file using the close() function of std::ofstream.

In the main function, demonstrate the usage of the FileHandler class by creating a FileHandler object named file with the log file name "output.txt". Use the writeData function to write the message "Hello, RAII!" to the log file. Additionally, simulate other code operations related to data logging or any other functionality specific to the autonomous vehicle system.

Catch any std::runtime_error that may occur during the file handling in the main function and print an appropriate error message to notify the system operators about the issue.

Your final program should efficiently handle file operations, ensure proper resource management using RAII, and provide informative error messages to maintain the integrity of the autonomous vehicle system's data logging and error handling functionality.

*/



