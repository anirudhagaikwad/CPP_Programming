/*
Define a custom exception class. Throw this exception if an input string contains a special character.

Input: Enter a string: programming
Output: Valid string!

Input: Enter a string: Python@forest
Output: Error: Input string contains a special character!

Input: Enter a string: #rain
Output: Error: Input string contains a special character!

*/


#include <iostream>
#include <string>

// Custom exception class to handle special characters in the input string
class SpecialCharacterException : public std::exception {
public:
    const char* what() const noexcept {
        return "Error: Input string contains a special character!";
    }
};

// Function to validate the input string and throw SpecialCharacterException if a special character is found
void validateInputString(const std::string& input) {
    for (char ch : input) {
        if (!std::isalnum(ch)) {
            throw SpecialCharacterException();
        }
    }
    std::cout<<" Valid string!";
}

int main() {
    try {
        std::string input;
        std::cout << "Enter a string: ";
        std::cin >> input;

        // Call the function to validate the input string
        validateInputString(input);
    }
    catch (const SpecialCharacterException& ex) {
        // Catch and handle the SpecialCharacterException
        std::cout << ex.what() << std::endl;
    }

    return 0;
}

/*
The provided C++ program demonstrates a simple input validation mechanism to check if an input string contains any special characters. It uses a custom exception class called SpecialCharacterException to handle situations where special characters are found in the input string.

The SpecialCharacterException class is derived from the standard std::exception class, which allows it to be caught in a catch block. This custom exception class overrides the what() member function to provide an error message when the exception is caught.

The validateInputString function takes a const reference to a std::string as input and checks each character in the string using a range-based for loop. It calls the std::isalnum() function from the <cctype> header to determine if the character is alphanumeric (i.e., a letter or a digit). If the character is not alphanumeric (i.e., it is a special character), the function throws a SpecialCharacterException.

In the main function, the program prompts the user to enter a string using std::cin and stores it in the input variable. It then calls the validateInputString function to check if the input string contains any special characters. If the function throws a SpecialCharacterException, the program catches it in the catch block.

In the catch block, the program catches the SpecialCharacterException using a const reference (const SpecialCharacterException& ex) and then calls the what() member function to retrieve and display the error message specified in the SpecialCharacterException class.


*/



