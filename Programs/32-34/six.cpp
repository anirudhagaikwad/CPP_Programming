/*
Write a program to reverse a given string using tail recursion.

Input: Enter a string: bytes
Output: Reversed string: setyb

*/

#include <iostream>
using namespace std;

void reverse(const char* str) {
    if (*str) {
        reverse(str + 1); // Tail recursion
        cout << *str;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Reversed string: ";
    reverse(str);
    cout << endl;
    return 0;
}

/*
The program reverses a given string using tail recursion.
It defines a function reverse that takes a constant pointer to the string. In each recursive call, the function moves
the pointer to the next character and calls itself recursively.
After the recursive call, the current character is printed, resulting in the string being printed in reverse order.
*/
