/*
Write a program to reverse a string using recursion.

Input: Enter a string: racecar
Output: Reversed string: racecar

Input: Enter a string: pizza
Output: Reversed string: azzip

*/

#include <iostream>
using namespace std;

// Recursive function to reverse a string
void reverseString(string& str, int start, int end) {
    if (start >= end)
        return;

    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverseString(str, 0, str.length() - 1);

    cout << "Reversed string: " << str;

    return 0;
}
