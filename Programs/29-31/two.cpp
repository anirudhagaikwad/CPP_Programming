/*
Write a program to calculate the factorial of a given number using recursion.

Input: Enter a number: 7
Output: Factorial of 7 = 5040
*/

#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " = " << factorial(num);

    return 0;
}

/*
Factorial of number = n* (n-1)!
Factorial of 0 and 1 is 1

This program recursively call the same function and return factorial
*/
