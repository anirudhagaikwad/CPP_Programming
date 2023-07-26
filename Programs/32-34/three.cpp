/*
Write a program to calculate the sum of digits of a positive integer using tail recursion.

Input: Enter a positive integer: 3244
Output: Sum of Digits: 13

*/


#include <iostream>
using namespace std;

int sumDigits(int n, int sum = 0) {
    if (n == 0)
        return sum;
    else
        return sumDigits(n / 10, sum + n % 10); // Tail recursion
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Sum of Digits: " << sumDigits(num) << endl;
    return 0;
}

/*
The program calculates the sum of digits of a positive integer using tail recursion.
It defines a function sumDigits that takes the number and an accumulator sum as arguments.
In each recursive call, the last digit of the number is added to the sum, and the number is divided by 10.
The recursion stops when the number becomes 0, and the accumulated sum is returned.
*/
