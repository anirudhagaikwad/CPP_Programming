/*
Write a program to print all prime numbers in a given range using tail recursion.

Input: Enter the start and end numbers: 4 12
Output: Prime numbers in the range: 5 7 11

*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num, int divisor = 2) {
    if (divisor <= sqrt(num)) {
        if (num % divisor == 0)
            return false;
        else
            return isPrime(num, divisor + 1); // Tail recursion
    }
    return true;
}

void printPrimes(int start, int end) {
    if (start <= end) {
        if (isPrime(start))
            cout << start << " ";
        printPrimes(start + 1, end); // Tail recursion
    }
}

int main() {
    int start, end;
    cout << "Enter the start and end numbers: ";
    cin >> start >> end;
    cout << "Prime numbers in the range: ";
    printPrimes(start, end);
    cout << endl;
    return 0;
}

/*
The program prints all prime numbers in a given range using tail recursion.
It defines two functions, isPrime and printPrimes. The isPrime function takes a number and a divisor as arguments.
In each recursive call, it checks if the number is divisible by the current divisor. If it is divisible,
the function returns false. Otherwise, it calls itself with an incremented divisor.
The recursion stops when the divisor becomes greater than the square root of the number.
The printPrimes function takes the start and end numbers of the range. In each recursive call, it checks if the
current number is prime using the isPrime function and prints it if it is. Then, it calls itself with the next number.
The recursion stops when the start number becomes greater than the end number.

*/
