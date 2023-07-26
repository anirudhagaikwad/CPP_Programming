/*

Find the smallest power of 2 greater than or equal to a given number

Input: 5
Output:  Next power of two: 8

Input: 128
Output:  Next power of two: 128

*/

#include <iostream>
using namespace std;

unsigned int nextPowerOfTwo(unsigned int num) {
    num--; // Decrease the given number by 1
    num |= num >> 1; // Set all bits after the most significant set bit
    num |= num >> 2; // Set all bits after the next significant set bit
    num |= num >> 4; // Set all bits after the next significant set bit
    num |= num >> 8; // Set all bits after the next significant set bit
    num |= num >> 16; // Set all bits after the next significant set bit
    num++; // Increment the number to the next power of two
    return num; // Return the next power of two
}

int main() {
    unsigned int num = 128; // The given number to find the next power of two
    unsigned int result = nextPowerOfTwo(num); // Call the function to find the next power of two
    cout << "Next power of two: " << result << std::endl; // Print the result
    return 0;
}

/*
The function nextPowerOfTwo takes an unsigned integer num as input and returns the next power of two after num.

Inside the function, we start by decreasing num by 1 using the decrement operator (num--). This is done to handle the case where num itself is already a power of two.

Then, we perform a series of bitwise operations to set all bits after the most significant set bit in num. This effectively results in a number with all bits set from the most significant bit to the least significant bit.

The bitwise OR operator (|) is used to perform the set operations. The right-shift operator (>>) is used to shift the bits to the right and create the necessary mask for setting the bits.

We perform four iterations of the set operation, each time shifting the bits by a different number of positions (1, 2, 4, and 8) to cover all the bits in the unsigned integer. This ensures that all bits after the most significant set bit are set.

After setting the bits, we increment num by 1 (num++) to obtain the next power of two.

Finally, we return the resulting num, which represents the next power of two after the given number.
*/
