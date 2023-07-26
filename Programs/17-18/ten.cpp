/*
Alice and Bob are participating in a coding competition. The challenge they are facing is to check whether a given string is a palindrome or not.
Write a program to help them.

Input: mom
Output: mom is a palindrome.

*/

#include <iostream>
#include <string>

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    int start = 0;
    int end = str.length() - 1;

    // Iterate over the string from both ends
    while (start < end) {
        // If characters at the start and end positions don't match, it's not a palindrome
        if (str[start] != str[end])
            return false;

        // Move to the next characters
        start++;
        end--;
    }

    // If the loop completes without returning false, the string is a palindrome
    return true;
}

int main() {
    string str;

    // Prompt the user to enter a string
    cout << "Enter a string: ";
    cin >> str;

    // Check if the string is a palindrome
    if (isPalindrome(str))
        cout << str << " is a palindrome." << std::endl;
    else
        cout << str << " is not a palindrome." << std::endl;

    return 0;
}

/*
The isPalindrome function takes a constant reference to a string (str) as a parameter and returns a boolean value.
It uses two variables, start and end, to keep track of the positions at the beginning and end of the string.
The function compares characters at these positions and continues moving inward until the start and end indices meet or cross each other.
If any pair of characters doesn't match, the function returns false immediately.
Otherwise, if the loop completes without returning false, it means that the string is a palindrome, and the function returns true.
*/
