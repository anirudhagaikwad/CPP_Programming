/*
 Write a program to calculate the sum of natural numbers from 1 to N using tail recursion.

 Input : Enter a positive integer: 7
 Output : Sum of natural numbers from 1 to 7 is 28

*/

#include <iostream>
using namespace std;

// Function to calculate the sum of natural numbers
int sum(int n, int acc = 0) {
    if (n == 0)
        return acc;
    else
        return sum(n - 1, acc + n);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Sum of natural numbers from 1 to " << num << " is " << sum(num) << endl;
    return 0;
}

/*
This program uses tail recursion to calculate the sum of natural numbers from 1 to N.
The sum function takes two parameters: n (the current number to add) and acc (the accumulated sum).
It starts with n equal to the input number and acc equal to 0. In each recursive call, n is decremented by 1
and the new sum is calculated by adding n to acc.
The final accumulated sum is returned when n becomes 0.
*/
