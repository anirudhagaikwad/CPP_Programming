/*
Write a program to convert a decimal number to binary using recursion.

Input: Enter a decimal number: 4
Output: Binary equivalent = 100

*/

#include <iostream>
using namespace std;

// Recursive function to convert decimal to binary
void decimalToBinary(int decimal) {
    if (decimal == 0)
        return;

    decimalToBinary(decimal / 2);
    cout << decimal % 2;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Binary equivalent = ";
    decimalToBinary(num);

    return 0;
}
