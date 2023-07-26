/*
Create program to check if two numbers are equal without using arithmetic operators comparison operators

Input: 5 5
Output: x is equal to y

*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;

    cin >> x >> y; // Read two integer values (x and y) from the user.

    // The expression "x ^ y" performs the bitwise XOR operation between x and y.
    // If the result of the XOR operation is zero, it means both x and y have the same binary representation,
    // and thus, they are equal.
    // If the result of the XOR operation is non-zero, it means x and y have different binary representations,
    // and they are not equal.

    if (!(x ^ y))
        cout << " x is equal to y "; // If x is equal to y, print this message.
    else
        cout << " x is not equal to y "; // If x is not equal to y, print this message.

    return 0;
}


/*
The given C++ code reads two integer values, x and y, from the user using cin. It then compares these two values to check if they are equal or not.

The comparison is done using the bitwise XOR operator ^. The expression x ^ y performs the XOR operation between x and y. The XOR operation takes two bits and returns 1 if the bits are different and 0 if they are the same.

The condition !(x ^ y) is used to check if the result of the XOR operation is zero or non-zero. If the result is zero, it means that both x and y have the same binary representation, indicating that they are equal. In this case, the program prints the message "x is equal to y".

If the result of the XOR operation is non-zero, it means that x and y have different binary representations, indicating that they are not equal. In this case, the program prints the message "x is not equal to y".

The program demonstrates a bitwise comparison technique using the XOR operator to quickly determine if two integer values are equal or not. It provides a simple way to check for equality without using the equality (==) operator.
*/

