/*
Write a program to find the sum of natural numbers up to a given number using recursion.

Input: Enter a number: 7
Output: Sum of natural numbers up to 7 = 28

*/

#include <iostream>
using namespace std;

// Recursive function to calculate the sum of natural numbers
int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of natural numbers up to " << num << " = " << sumOfNaturalNumbers(num);

    return 0;
}
