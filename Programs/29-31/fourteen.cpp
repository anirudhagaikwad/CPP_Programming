/*
Write a program to print all the numbers between two given integers using recursion.

Input: Enter two numbers: 2 8
Output: Numbers between 2 and 8 = 2 3 4 5 6 7 8

*/

#include <iostream>
using namespace std;

// Recursive function to print numbers in range
void printRange(int start, int end) {
    if (start > end)
        return;
    cout << start << " ";
    printRange(start + 1, end); //start from next element in range
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Numbers between " << num1 << " and " << num2 << " = ";
    printRange(num1, num2);

    return 0;
}
