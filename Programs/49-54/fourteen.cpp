/*
 Implement a class representing a binary number and overload the bitwise operators (|, &, ^).
*/

#include <iostream>
using namespace std;

class BinaryNumber {
private:
    unsigned int number;

public:
    BinaryNumber(unsigned int n) : number(n) {}

    // Overloading the bitwise OR '|' operator
    BinaryNumber operator|(const BinaryNumber& other) {
        return BinaryNumber(number | other.number);
    }

    // Overloading the bitwise AND '&' operator
    BinaryNumber operator&(const BinaryNumber& other) {
        return BinaryNumber(number & other.number);
    }

    // Overloading the bitwise XOR '^' operator
    BinaryNumber operator^(const BinaryNumber& other) {
        return BinaryNumber(number ^ other.number);
    }

    void display() {
        cout << "Binary Number: " << number << endl;
    }
};

int main() {
    BinaryNumber num1(15);
    BinaryNumber num2(10);

    BinaryNumber resultOr = num1 | num2;
    BinaryNumber resultAnd = num1 & num2;
    BinaryNumber resultXor = num1 ^ num2;

    resultOr.display();
    resultAnd.display();
    resultXor.display();

    return 0;
}

/*
This program creates a class BinaryNumber to represent a binary number.
The bitwise OR '|', AND '&', and XOR '^' operators are overloaded to perform the corresponding bitwise operations.
The display() function is used to print the results of each operation.

*/

