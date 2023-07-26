/*
Alex and Bella are playing a game with binary numbers. Alex gives Bella a positive integer, and Bella's task is to find the length of the
longest sequence of consecutive set bits (1s) in the binary representation of the given integer.
write program to help Bella.

Input: 19
Output: Length of longest sequence of consecutive set bits: 2

Explanation: binary of 19 is :10011 , here length of the longest sequence of consecutive set bits is 2
*/

#include <iostream>
using namespace std;

int countConsecutiveSetBits(unsigned int num) {
    int count = 0; // Variable to store the current count of consecutive set bits
    int maxCount = 0; // Variable to store the maximum count of consecutive set bits found

    while (num) {
        if (num & 1) // If the least significant bit is set (1)
            count++; // Increment the count of consecutive set bits
        else
            count = 0; // Reset the count if the least significant bit is not set (0)

        if (count > maxCount) // If the current count is greater than the maximum count
            maxCount = count; // Update the maximum count

        num >>= 1; // Right shift the number to check the next bit
    }
    return maxCount; // Return the length of the longest sequence of consecutive set bits
}

int main() {
    unsigned int num = 19; // The given integer to count consecutive set bits
    int result = countConsecutiveSetBits(num); // Call the function to count the consecutive set bits
    cout << "Length of longest sequence of consecutive set bits: " << result << std::endl; // Print the result
    return 0;
}

/*
he function countConsecutiveSetBits takes an unsigned integer num as input and returns the length of the longest sequence of consecutive set bits found in num.

Inside the function, we initialize two variables count and maxCount to 0. These variables will be used to keep track of the current count and the maximum count of consecutive set bits, respectively.

We enter a while loop that continues until the number becomes 0 (all bits have been checked).

In each iteration of the loop, we check the least significant bit of num using the bitwise AND operator (num & 1).

If the least significant bit is set (1), we increment the count variable. This means we have encountered a consecutive set bit.

If the least significant bit is not set (0), we reset the count variable to 0. This means the consecutive sequence of set bits has been interrupted.

After updating the count, we compare it with the maxCount. If the count is greater than the maxCount, we update the maxCount with the current count.

Finally, we right-shift the num by 1 bit position (num >>= 1) to check the next bit in the next iteration.

Once the while loop ends, we return the maxCount, which represents the length of the longest sequence of consecutive set bits found in the given integer.
*/
