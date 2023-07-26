/*
Given a positive integer N, print count of set bits in it.

Input: N = 6
Output: 2
Explanation:
Binary representation is '110'
So the count of the set bit is 2

*/
#include <iostream>

int countSetBits(int num) {
    int count = 0;

    while (num > 0) {
        // Use bitwise AND with 1 to check the rightmost bit
        if (num & 1) {
            count++;
        }
        // Right shift the number by 1 to check the next bit
        num >>= 1;
    }

    return count;
}

int main() {
    int num = 25;
    int result = countSetBits(num);

    std::cout << "Number of set bits in " << num << " is: " << result << std::endl;

    return 0;
}
/*

Inside the countSetBits function, a variable count is initialized to 0. The program then enters a while loop that continues until num becomes 0.
In each iteration, the program checks the rightmost bit of num using a bitwise AND operation with 1. If the result is 1, it means the rightmost bit is set, so the count is incremented. After that, the program right-shifts num by 1 bit to move on to the next bit. This process continues until num becomes 0.

Once the while loop completes, the function returns the final count of set bits.

In the main function, an example positive integer num is declared (25 in this case). The countSetBits function is called with num as the argument, and the result is printed.
*/
