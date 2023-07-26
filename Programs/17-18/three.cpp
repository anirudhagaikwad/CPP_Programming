/*
In a video game called "Magical Potions," players can collect magical potions to boost their power.
Each magical potion has a unique numeric value associated with it.
Players are curious to know if a particular potion can be represented as a power of 2.
You need to help them by creating a program that checks if a given potion's value is a power of 2 or not.

Input: 16
Output:16 is a power of 2.

Input: 5
Output:5 is not a power of 2.

*/


#include <iostream>
using namespace std;

bool isPowerOfTwo(int num) {
    if (num <= 0)
        return false;
    // A number that is a power of two has only one bit set (i.e., it is in the form of 100...00 in binary).
    // So, if we perform a bitwise AND operation between the number and its predecessor (num & (num - 1)),
    // it should result in zero for power of two numbers.

    return (num & (num - 1)) == 0;
}

int main() {
    int num = 5;
    bool result = isPowerOfTwo(num);
    cout << num << " is" << (result ? "" : " not") << " a power of 2." << std::endl;
    return 0;
}

/*
Implement a function that takes an integer as input and returns true if it is a power of 2, false otherwise.
*/
