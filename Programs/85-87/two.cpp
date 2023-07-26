/*
 Read data from a file. Throw an exception if the file cannot be opened.

 Input:
 ifstream inputFile(invalidFileName)

 Output:
 terminate called after throwing an instance of 'std::runtime_error'
  what():  Cannot open file: <<invalidFileName>>

 */

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Specify the filename of the data file to read
    std::string filename = "data.txt";

    // Open the file for reading using ifstream
    std::ifstream inputFile(filename);

    // Check if the file was successfully opened
    if (!inputFile.is_open()) {
        // If the file couldn't be opened, throw a runtime_error with an error message
        throw std::runtime_error("Cannot open file: " + filename);
    }

    // Variable to store each line of data read from the file
    std::string data;

    // Read each line from the file and process it
    while (getline(inputFile, data)) {
        // Here, you can process the 'data' as needed.
        // For this example, we will simply print it to the console.
        std::cout << data << std::endl;
    }

    // Close the file after reading is complete
    inputFile.close();

    // Return 0 to indicate successful execution
    return 0;
}

/*
The provided C++ program reads data from a file specified by the filename variable and processes it. The program uses the ifstream class from the <fstream> header to open the file for reading.

Upon executing the program, the first step is to specify the filename variable with the name of the data file to be read, in this case, "data.txt". The program then attempts to open the file using inputFile, an instance of ifstream.

The program checks whether the file was successfully opened using the is_open() member function of ifstream. If the file could not be opened (e.g., if the file does not exist or the path is incorrect), the program throws a std::runtime_error exception with an appropriate error message indicating the issue.

If the file is successfully opened, the program proceeds to read the data from the file line by line using a while loop. The getline() function from the <string> header is used to read each line into the data variable. Inside the loop, the program can process the data as needed.

For this example, the data is simply printed to the console using std::cout. However, you can replace this part with your specific data processing logic, such as parsing, calculations, or storing the data in a container.

After processing all the data from the file, the program closes the file using the close() member function of ifstream to release any resources associated with the file.

*/




