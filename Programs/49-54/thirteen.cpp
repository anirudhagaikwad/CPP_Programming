/*
 Create a class representing a number and overload the '^' operator to calculate the power of the number.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Number {
private:
    double value;

public:
    Number(double v) : value(v) {}

    // Overloading the '^' operator
    Number operator^(const double power) {
        return Number(pow(value, power));
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num(2.5);

    Number squared = num ^ 2;
    Number cubed = num ^ 3;

    squared.display();
    cubed.display();

    return 0;
}


/*
This program creates a class Number to represent a number.
The '^' operator is overloaded to calculate the power of the number.
The display() function is used to print the squared and cubed results.

*/


