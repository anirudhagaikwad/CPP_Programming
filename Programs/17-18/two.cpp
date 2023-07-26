/*
Alice is learning how to program and wants to practice by writing a program to generate the Fibonacci series.
Help alice to generate Fibonacci series.

Input: Enter the number of terms: 8
Output: Fibonacci series: 0 1 1 2 3 5 8 13

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int first = 0, second = 1; //first and second terms of fibonacci series are constant

    cout << "Fibonacci series: ";
    cout << first << " " << second << " ";

    for (int i = 3; i <= n; i++) {
        int next = first + second; // add last two terms to generate next term
        cout << next << " ";

        first = second;
        second = next;
    }

    return 0;
}

/*
 This program generates the Fibonacci series up to a given number of terms.
*/
