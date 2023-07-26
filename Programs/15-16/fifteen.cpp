/*
You will be given an integer n, your task is to return the sum of all natural number less than or equal to n.
As the answer could be very large, return answer modulo 109+7.

Input: 5
Output: Sum of natural numbers up to 5 (mod 10^9 + 7): 15

Input: 500
Output: Sum of natural numbers up to 500 (mod 10^9 + 7): 125250

*/

#include <iostream>

const int MOD = 1000000007;

int sumOfNaturalNumbers(int n) {
    long long sum = 0;

    // Calculate the sum using the formula (n * (n + 1) / 2)
    sum = (static_cast<long long>(n) * (n + 1)) / 2;

    // Apply modulo operation to the sum
    sum %= MOD;

    return static_cast<int>(sum);
}

int main() {
    int n = 500;
    int result = sumOfNaturalNumbers(n);
    std::cout << "Sum of natural numbers up to " << n << " (mod 10^9 + 7): " << result << std::endl;

    return 0;
}
/*
The program calculates the sum of all natural numbers less than or equal to a given number n using the formula (n * (n + 1) / 2). It then applies the modulo operation to the sum to ensure the result is within the range of 10^9 + 7.

The sumOfNaturalNumbers function takes an integer n as input and returns the sum of all natural numbers less than or equal to n modulo 10^9 + 7.

In the main function, an example value of n (1000 in this case) is used. The sumOfNaturalNumbers function is called with n as the argument, and the result is printed.

Note that the program uses a long long type to handle larger numbers during the calculation of the sum to avoid overflow. Finally, the result is cast back to int before returning it.
*/
