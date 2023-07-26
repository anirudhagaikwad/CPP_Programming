/*
Write a program to calculate the sum of digits of a positive integer using recursion.

Input: Enter a positive integer: 456
Output: Sum of digits = 15
*/

#include <iostream>
using namespace std;

// Recursive function to calculate the sum of digits
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Sum of digits = " << sumOfDigits(num);

    return 0;
}
