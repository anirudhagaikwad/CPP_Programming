/*
 Write C++ program to print maximum value of unsigned int.
*/

#include <iostream>

int main()
{
    unsigned int max; // Declare an unsigned integer variable 'max'.

    max = 0; // Initialize 'max' to zero.

    max = ~max; // Perform bitwise NOT (~) operation on 'max', which flips all bits from 0 to 1 and from 1 to 0.

    // The value of 'max' after the bitwise NOT operation will have all bits set to 1,
    // resulting in the maximum value that an unsigned integer can hold.

    std::cout << "Max value : " << max; // Print the calculated maximum value of an unsigned integer.

    return 0;
}

/*
The given C++ code calculates and prints the maximum value that can be represented by an unsigned integer data type.

In the code, an unsigned integer variable named max is declared. Unsigned integers are used to represent non-negative integers and have a range from 0 to the maximum value that can be represented by the number of bits allocated for that data type.

The variable max is initially set to zero to start the calculation. Then, the code performs a bitwise NOT (~) operation on max. The bitwise NOT operation flips all bits in the binary representation of max. All 0 bits become 1, and all 1 bits become 0.

After the bitwise NOT operation, the value of max will have all its bits set to 1, which represents the maximum value that can be held by an unsigned integer data type. This value is the highest value that can be represented using the available bits.

The calculated maximum value of an unsigned integer is then printed to the console using std::cout. The output message will display "Max value : " followed by the maximum value of the unsigned integer.

The program demonstrates how to calculate the maximum value of an unsigned integer using the bitwise NOT operation. It provides a simple way to determine the largest representable value for unsigned integer data types.
*/
