/*
Create a class FileHandler to handle file operations. Use a static integer fileCount to keep track of the number of open files.
Implement constructors and destructors to manage the file count correctly when objects are created and destroyed.
*/

#include <iostream>

class FileHandler {
public:
    FileHandler(const std::string& filename) : filename(filename) {
        ++fileCount;
        std::cout << "Opening file: " << filename << std::endl;
    }

    ~FileHandler() {
        --fileCount;
        std::cout << "Closing file: " << filename << std::endl;
    }

    static int getFileCount() {
        return fileCount;
    }

private:
    std::string filename;
    static int fileCount;
};

int FileHandler::fileCount = 0;

int main() {
    FileHandler file1("file1.txt");
    FileHandler file2("file2.txt");

    std::cout << "Open files: " << FileHandler::getFileCount() << std::endl;
    return 0;
}

/*
The program demonstrates a class FileHandler to handle file operations.
The constructor increments the fileCount, and the destructor decrements it when objects are created and destroyed, respectively.
We test this by creating two FileHandler objects and then printing the open file count using the static member function
getFileCount().

*/


