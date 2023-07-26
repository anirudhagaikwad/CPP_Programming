/*
 Write a program to generate the Fibonacci series up to a given number.

 Input: Enter the number of terms: 7
 Output: Fibonacci series up to 7 terms: 0 1 1 2 3 5 8

*/

#include <iostream>
using namespace std;

// Recursive function to generate the Fibonacci series
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    cout << "Fibonacci series up to " << num << " terms: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}

/*
This program uses recursion to generate the Fibonacci series up to a given number of terms.
*/
