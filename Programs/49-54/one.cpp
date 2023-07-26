/*
 Implement a class representing complex numbers and overload the '+' operator to perform addition.

 Input:  c1(2, 3)
         c2(4, 5)
 Output: 6 + 8i

*/

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Overloading the '+' operator
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex result = c1 + c2;
    result.display();

    return 0;
}

/*
This program implements a class Complex to represent complex numbers.
The '+' operator is overloaded to perform addition of two complex numbers.
The display() function is used to print the result.
*/


