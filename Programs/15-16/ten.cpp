/*
Write CPP program to divide a number by 4  without using '/'

*/


#include <iostream>

using namespace std;

int main()
{
    int n = 4; // Initialize an integer variable 'n' with the value 4.

    n = n >> 2; // Right-shift 'n' by 2 bits.

    // The right-shift operator (>>) shifts the bits of a binary number to the right by a specified number of positions.
    // In this case, 'n' (binary: 0100) is right-shifted by 2 positions.

    cout << n; // Print the value of 'n' after the right-shift operation.

    return 0;
}

/*
The given C++ code demonstrates the use of the right-shift operator (>>) to perform bitwise right-shift on an integer variable.

At the beginning of the code, an integer variable named n is declared and initialized with the value 4. The binary representation of 4 is 0100.

The line n = n >> 2; performs a right-shift operation on n. The right-shift operator (>>) moves the bits of n to the right by the specified number of positions (in this case, 2 positions). The result of the right-shift operation is stored back into n.

The binary representation of 4 after the right-shift operation is: 0001

The rightmost two bits (01) are shifted out, and the leftmost two bits are filled with zeros.

Finally, the code prints the value of n to the console using cout, which displays the result of the right-shift operation. The output will be "1" since the new value of n is 1 after the right-shift.

The right-shift operator (>>) is a bitwise operator commonly used for division by powers of 2. Shifting an integer to the right by 'n' positions is equivalent to dividing the integer by 2^n. In this example, shifting 4 right by 2 positions is equivalent to dividing 4 by 2^2, which results in 1.
*/
