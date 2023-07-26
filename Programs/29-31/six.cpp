/*
Write a program to calculate the greatest common divisor (GCD) of two numbers using recursion.

Input : Enter two numbers: 6 12
Output: GCD of 6 and 12 = 6

*/

#include <iostream>
using namespace std;

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " = " << gcd(num1, num2);

    return 0;
}
