/*
Create a class representing fractions and overload the '+' operator to add two fractions.

Input: f1(1, 2);
       f2(1, 3)
Output: 5/6

*/

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den) : numerator(num), denominator(den) {}

    // Overloading the '+' operator
    Fraction operator+(const Fraction& other) {
        int num = (numerator * other.denominator) + (other.numerator * denominator);
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(1, 3);

    Fraction result = f1 + f2;
    result.display();

    return 0;
}

/*
This program creates a class Fraction to represent fractions.
The '+' operator is overloaded to perform addition of two fractions.
The display() function is used to print the result.
*/
