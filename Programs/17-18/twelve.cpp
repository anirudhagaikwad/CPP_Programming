/*
Generate a magical number which is equal to the sum of digits of a given number.

Input: 549
Output: Sum of digits: 18

*/


#include <iostream>

// Function to calculate the sum of digits in a number
int sumOfDigits(int n) {
    int sum = 0;

    // Iterate until the number becomes 0
    while (n != 0) {
        // Get the rightmost digit of the number
        int digit = n % 10;
        // Add the digit to the sum
        sum += digit;
        // Remove the rightmost digit from the number
        n /= 10;
    }

    // Return the sum of digits
    return sum;
}

int main() {
    int n;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> n;

    // Calculate the sum of digits
    int sum = sumOfDigits(n);

    // Print the sum of digits
    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}

/*
The sumOfDigits function takes an integer n as a parameter and returns the sum of its digits.
It initializes a variable sum to 0. The function uses a while loop to iterate until the number becomes 0.
In each iteration, it calculates the rightmost digit of the number by taking the modulus (%) of the number with 10.
It adds the digit to the sum variable and then removes the rightmost digit from the number by dividing it by 10.
This process continues until all the digits have been processed. Finally, the function returns the calculated sum.
*/
