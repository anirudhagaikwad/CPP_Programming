/* Write a program to generate the Fibonacci series up to a given number.
The number of terms in the series should be taken as an argument, with a default value of 10.

Input: Enter the number of terms in the Fibonacci series: 9
Output: Fibonacci Series: 0 1 1 2 3 5 8 13 21

*/


#include <iostream>

// Function prototype with a default argument
void generateFibonacciSeries(int numTerms = 10);

int main()
{
    int num;
    std::cout << "Enter the number of terms in the Fibonacci series: ";
    std::cin >> num;
    generateFibonacciSeries(num);
    return 0;
}

// Function definition
void generateFibonacciSeries(int numTerms)
{
    int first = 0, second = 1;
    std::cout << "Fibonacci Series: ";
    for (int i = 0; i < numTerms; ++i)
    {
        std::cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
}

// The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding ones.
// The program takes an optional argument, the number of terms in the series, and prints the Fibonacci series up to that number of terms.
