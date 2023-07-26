/*
Write a program to print numbers from a given start to end using indirect recursion.

Input: Enter the start and end numbers: 1 8
Output: Numbers in the range: 1 2 3 4 5 6 7 8

*/

#include <iostream>
using namespace std;

void printRange2(int start, int end); // Function prototype

void printRange1(int start, int end) {
    if (start <= end) {
        cout << start << " ";
        printRange2(start + 1, end); // Indirect recursion
    }
}

void printRange2(int start, int end) {
    if (start <= end) {
        cout << start << " ";
        printRange1(start + 1, end); // Indirect recursion
    }
}

int main() {
    int start, end;
    cout << "Enter the start and end numbers: ";
    cin >> start >> end;
    cout << "Numbers in the range: ";
    printRange1(start, end);
    cout << endl;
    return 0;
}

/*
The program prints numbers from a given start to end using indirect recursion.
It defines two functions, printRange1 and printRange2, which call each other to print the numbers.
The base case is when the start index becomes greater than the end index, where the recursion stops.
*/
