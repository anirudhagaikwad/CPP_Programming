/*
Given three integers  'A' denoting the first term of an arithmetic sequence , 'C' denoting the common difference
of an arithmetic sequence and an integer 'B'. you need to tell whether 'B' exists in the arithmetic sequence or not.
Return 1 if B is present in the sequence. Otherwise, returns 0.

Input: A = 1, B = 2, C = 3
Output: 2 is not present in the arithmetic sequence.

Input: A = 1, B = 3, C = 2
Output: 3 is present in the arithmetic sequence.

*/

#include <iostream>

int isPresentInArithmeticSequence(int A, int C, int B) {
    // Check if B is equal to the first term A
    if (B == A)
        return 1;

    // Check if B is reachable from A by adding multiples of the common difference C
    if ((B - A) % C == 0 && (B - A) / C > 0)
        return 1;

    return 0;
}

int main() {
    int A = 1;    // First term of the arithmetic sequence
    int C = 2;    // Common difference of the arithmetic sequence
    int B = 3;   // Integer to check

    int result = isPresentInArithmeticSequence(A, C, B);

    if (result == 1)
        std::cout << B << " is present in the arithmetic sequence." << std::endl;
    else
        std::cout << B << " is not present in the arithmetic sequence." << std::endl;

    return 0;
}
/*
The program defines a function isPresentInArithmeticSequence that takes three integers: 'A' (the first term of the arithmetic sequence), 'C' (the common difference), and 'B' (the integer to check). The function returns 1 if 'B' is present in the arithmetic sequence and 0 otherwise.

The function first checks if 'B' is equal to the first term 'A'. If they are equal, it means that 'B' is present in the sequence, so the function returns 1.

If 'B' is not equal to 'A', the function checks if 'B' can be reached from 'A' by adding multiples of the common difference 'C'. This is done by checking if the difference between 'B' and 'A' is divisible by 'C' without a remainder (i.e., (B - A) % C == 0) and if the result of the division is greater than 0 (i.e., (B - A) / C > 0). If both conditions are true, it means that 'B' can be reached from 'A' in the arithmetic sequence, so the function returns 1.

If neither of the above conditions is met, it means that 'B' is not present in the arithmetic sequence, so the function returns 0.
*/
