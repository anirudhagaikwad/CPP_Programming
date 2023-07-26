/*
 Given two C-style strings (null-terminated character arrays), write a function to
 concatenate them using pointer arithmetic and return the result as a new dynamically allocated C-style string.

 Input: str1=Hello, str2=World!
 Output: Concatenated String: Hello, world!

*/
#include <iostream>
#include <cstring>

// Function to concatenate two strings using pointer arithmetic
char* stringConcatenate(const char* str1, const char* str2) {
    const size_t len1 = std::strlen(str1);
    const size_t len2 = std::strlen(str2);
    char* result = new char[len1 + len2 + 1];

    char* ptr = result;
    for (const char* c = str1; *c; ++c) {
        *ptr++ = *c;
    }
    for (const char* c = str2; *c; ++c) {
        *ptr++ = *c;
    }
    *ptr = '\0';

    return result;
}

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "world!";
    char* concatenatedString = stringConcatenate(str1, str2);

    std::cout << "Concatenated String: " << concatenatedString << std::endl;

    delete[] concatenatedString;

    return 0;
}


/*
 This program demonstrates how to concatenate two strings using pointer arithmetic.
 It involves iterating through the characters of both strings using pointers.
*/
