/*
Write a program to calculate the power of a number using recursion.

Input:
Enter base: 2
Enter exponent: 5

Output:
2 raised to the power of 5 = 32

*/

#include <iostream>
using namespace std;

// Recursive function to calculate power
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << " raised to the power of " << exponent << " = " << power(base, exponent);

    return 0;
}
