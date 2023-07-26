/*
You have been assigned the task of implementing a C++ class that represents a special kind of number.
Your task is to design and implement the class, along with overloading the unary '-' operator to handle the negation of this unique number.

Input: 10
Output: -10

*/

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    // Overloading the unary '-' operator
    Number operator-() {
        return Number(-value);
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number num(10);

    Number negNum = -num;
    negNum.display();

    return 0;
}

/*
 This program creates a class Number to represent a simple number.
 The unary '-' operator is overloaded to negate the number.
 The display() function is used to print the result.
*/
