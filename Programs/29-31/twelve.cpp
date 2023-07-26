/*
Write a program to check if a given string is a palindrome using recursion.

Input: Enter a string: madam
Output: Palindrome

Input: Enter a string: hatori
Output: Not a palindrome

*/

#include <iostream>
#include <cstring>
using namespace std;

// Recursive function to check if a string is a palindrome
bool isPalindrome(string str, int start, int end) {
    if (start >= end)
        return true;
    if (str[start] != str[end])
        return false;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}
