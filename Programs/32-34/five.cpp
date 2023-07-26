/*
 Write a program to calculate the power of a number using tail recursion.

 Input: Enter the base: 4 3
 Output: Enter the exponent: Result: 64
*/

#include <iostream>
using namespace std;

double power(int base, int exponent, double result = 1) {
    if (exponent == 0)
        return result;
    else
        return power(base, exponent - 1, result * base); // Tail recursion
}

int main() {
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << "Result: " << power(base, exponent) << endl;
    return 0;
}

/*
The program calculates the power of a number using tail recursion.
It defines a function power that takes the base, exponent, and an accumulator result as arguments.
In each recursive call, the base is multiplied by the result, and the exponent is decremented.
The recursion stops when the exponent becomes 0, and the accumulated result is returned.
*/
