/*
 Write a program to find the maximum of two numbers.

Input: Enter two numbers: 45 67
Output: Maximum number is: 67

*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int maxNum = (a > b) ? a : b;

    cout << "Maximum number is: " << maxNum << endl;
    return 0;
}

/*
This program takes two numbers as input from the user and finds the maximum of the two using the conditional operator (?:).
*/
