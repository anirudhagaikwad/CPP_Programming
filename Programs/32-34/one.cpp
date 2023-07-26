/*
Write a program to check whether a given number is even or odd using indirect recursion.

Input: Enter an integer: 5
Output: 5 is odd.

Input: Enter an integer: 42
Output: 42 is even.

*/


#include <iostream>
using namespace std;

// Function to check if a number is even
bool isEven(int n);

// Function to check if a number is odd
bool isOdd(int n) {
    if (n == 0)
        return false;
    else
        return isEven(n - 1);
}

// Function to check if a number is even
bool isEven(int n) {
    if (n == 0)
        return true;
    else
        return isOdd(n - 1);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (isEven(num))
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;
    return 0;
}

/*
This program demonstrates indirect recursion to check whether a given number is even or odd.
Two functions, isEven and isOdd, call each other alternatively by decrementing the value of n until it reaches 0.
If n becomes 0 in the isEven function, it means the original number was even, and if it becomes 0 in the isOdd function,
it means the original number was odd.
*/
