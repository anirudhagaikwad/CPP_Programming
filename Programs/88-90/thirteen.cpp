/*
You are a talented software engineer working on an exciting project to develop an advanced scientific calculator targeted at students
and academic professionals. As part of this ambitious undertaking, you have been assigned a crucial task:
to create a flexible program that can efficiently calculate the power of a number.

Input: base=2, exponent=5
Output: Power: 32

Input: base=3.14, exponent=2
Output: Power: 9.8596
*/


#include <iostream>
using namespace std;

// Function template 'calculatePower' calculates the power of a number.
// The template takes two parameters: 'base', representing the base number of type 'T', and 'exponent', an integer representing the power.
// The function returns the result of 'base' raised to the power of 'exponent'.
template <typename T>
T calculatePower(T base, int exponent) {
    T result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    // Calculate the power of an integer (2) raised to the exponent (5).
    cout << "Power: " << calculatePower<int>(2, 5) << endl;         // Output: Power: 32

    // Calculate the power of a double (3.14) raised to the exponent (2).
    cout << "Power: " << calculatePower<double>(3.14, 2) << endl;   // Output: Power: 9.8596

    return 0;
}

/*
This C++ program demonstrates the use of a function template to calculate the power of a number.
The template function 'calculatePower' takes a base number and an exponent as input and returns the result of the base raised to the power of the exponent.

*/


