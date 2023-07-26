/*
Alice and Bob are students studying in the same class. They were given a challenge by their teacher to calculate the exponentiation of a given number.
The teacher gave them a number 'base' and an exponent 'power' and asked them to
write a program to find the result of 'base' raised to the power of 'power'.
The program should take the base and exponent as arguments, with default values of 2 and 3 respectively.

Input: base= 4, exponent=3
Output: Result: 64

*/

#include <iostream>

// Function prototype with default arguments
int calculateExponentiation(int base = 2, int exponent = 3);

int main()
{
    int result = calculateExponentiation(4, 3);
    std::cout << "Result: " << result << std::endl;

    result = calculateExponentiation();
    std::cout << "Result: " << result << std::endl;

    return 0;
}

// Function definition
int calculateExponentiation(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; ++i)
    {
        result *= base;
    }
    return result;
}

// The program calculates the exponentiation of a number based on the base and exponent provided as arguments to the function.
// If no arguments are provided, the default values of base 2 and exponent 3 are used.
