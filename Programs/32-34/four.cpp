/*
Write a program to calculate the greatest common divisor (GCD) of two numbers using tail recursion.

Input: Enter two numbers: 9 27
Output: GCD: 9

*/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b); // Tail recursion
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD: " << gcd(num1, num2) << endl;
    return 0;
}

/*

The program calculates the greatest common divisor (GCD) of two numbers using tail recursion and the Euclidean algorithm.
The function gcd takes two numbers as arguments. In each recursive call, the second number is divided by the remainder
of the division between the two numbers.
The recursion stops when the second number becomes 0, and the first number is returned as the GCD.

*/
