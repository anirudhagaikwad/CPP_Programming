/*
Write a program to convert a binary number to decimal using recursion.

Input:  Enter a binary number: 100
Output: Decimal equivalent = 4
*/

#include <iostream>
using namespace std;

// Recursive function to convert binary to decimal
int binaryToDecimal(int binary) {
    if (binary == 0)
        return 0;
    return (binary % 10) + 2 * binaryToDecimal(binary / 10);
}

int main() {
    int num;
    cout << "Enter a binary number: ";
    cin >> num;

    cout << "Decimal equivalent = " << binaryToDecimal(num);

    return 0;
}
