/*
In a language learning application, a new word game called "Palindromic Word Detector" is introduced to challenge users' language and
programming skills. The game requires users to enter a word, and the application will check if the word is a palindrome using pointers.

Input: Madam
Output: Palindrome
*/

#include <iostream>
#include <cstring>
#include <cctype>

// Function to check if a string is a palindrome
bool isPalindrome(char* str) {
    int length = strlen(str);  // Calculate the length of the string
    char* start = str;  // Pointer to the start of the string
    char* end = str + length - 1;  // Pointer to the end of the string

    // Compare characters from the start and end pointers until they meet in the middle
    while (start < end) {
        if (std::tolower(*start) != std::tolower(*end)) {  // Compare characters while ignoring case
            return false;  // If a mismatch is found, the string is not a palindrome
        }
        start++;  // Move the start pointer to the next character
        end--;  // Move the end pointer to the previous character
    }
    return true;  // If the loop completes without finding any mismatches, the string is a palindrome
}

int main() {
    char str[] = "Madam";  // Create a character array (C-style string)
    bool palindrome = isPalindrome(str);  // Call the function to check if the string is a palindrome
    if (palindrome) {
        std::cout << "Palindrome" << std::endl;  // Print a message indicating that the string is a palindrome
    } else {
        std::cout << "Not a palindrome" << std::endl;  // Print a message indicating that the string is not a palindrome
    }
    return 0;
}
