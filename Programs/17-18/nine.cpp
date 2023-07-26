/*
For an integer N find the number of trailing zeroes in N!.

Input: 4
Output: The number of trailing zeroes in 4! is: 0

Input: 25
Output: The number of trailing zeroes in 25! is: 6


*/

#include <iostream>

int countTrailingZeroes(int N) {
    int count = 0;

    // Divide N by powers of 5 and count the number of multiples of 5
    for (int i = 5; N / i >= 1; i *= 5) {
        count += N / i;
    }

    return count;
}

int main() {
    int N = 10;
    int zeroes = countTrailingZeroes(N);

    std::cout << "The number of trailing zeroes in " << N << "! is: " << zeroes << std::endl;

    return 0;
}
