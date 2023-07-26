/*
Alex is working on a C++ program that involves string concatenation.
They want to create a program that can concatenate two strings or three strings based on user input using method overloading.
Alex plans to implement a C++ class that will handle the concatenation operations.

Example:
Enter string 1: hello
Enter string 2: indian
Concatenated string: helloindian
Enter string 3: soldiers
Concatenated string: helloindiansoldiers
*/

#include<iostream>
#include<string>

// Concatenate two strings
std::string concatenateStrings(const std::string& str1, const std::string& str2)
{
    return str1 + str2;
}

// Concatenate three strings
std::string concatenateStrings(const std::string& str1, const std::string& str2, const std::string& str3)
{
    return str1 + str2 + str3;
}

int main()
{

    std::string str1, str2, str3;

    // Two strings
    std::cout << "Enter string 1: ";
    std::getline(std::cin, str1);

    std::cout << "Enter string 2: ";
    std::getline(std::cin, str2);

    std::cout << "Concatenated string: " << concatenateStrings(str1, str2) << std::endl;

    // Three strings
    std::cout << "Enter string 3: ";
    std::getline(std::cin, str3);

    std::cout << "Concatenated string: " << concatenateStrings(str1, str2, str3) << std::endl;

    return 0;
}

/*
Above program concatenated the two or three strings based on user input.
strings are passed as const so functions could not modify the strings further.
*/
