/*
Write a program to swap two numbers using bitwise XOR operator.

Example:
Before swap: a = 10, b = 20
After swap: a = 20, b = 10


*/

#include <iostream>
using namespace std;

int main() {
    int a = 10; // Initialize variable 'a' with value 10
    int b = 20; // Initialize variable 'b' with value 20

    cout << "Before swap: a = " << a << ", b = " << b << endl; // Print the values of 'a' and 'b' before swapping

    a = a ^ b; // Perform bitwise XOR operation between 'a' and 'b' and assign the result to 'a'
    b = a ^ b; // Perform bitwise XOR operation between 'a' and 'b' (now containing the previous value of 'a') and assign the result to 'b'
    a = a ^ b; // Perform bitwise XOR operation between 'a' (now containing the previous value of 'b') and 'b' (now containing the previous value of 'a') and assign the result to 'a'

    cout << "After swap: a = " << a << ", b = " << b << endl; // Print the values of 'a' and 'b' after swapping

    return 0;
}

/*
Perform the swapping using bitwise XOR operations:-

Set 'a' to the result of performing a bitwise XOR operation between 'a' and 'b'. This step effectively combines the bits of 'a' and 'b' without losing any information.
Set 'b' to the result of performing a bitwise XOR operation between 'a' (which now contains the previous value of 'b') and 'b' (which still holds the previous value of 'a'). This operation cancels out the original value of 'b', leaving 'a'.
Set 'a' to the result of performing a bitwise XOR operation between 'a' (which now contains the previous value of 'b') and 'b' (which now contains the original value of 'a'). This operation cancels out the original value of 'a', leaving 'b'.
Print the final values of 'a' and 'b' after the swap.

*/
