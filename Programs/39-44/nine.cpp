/*
Create a C++ program to add two complex numbers using friend functions and handle constant objects properly.

Input: c1(2.0, 3.0)
       c2(4.0, 1.5)

Output: Result of complex number addition: 6 + 4.5i

*/
#include <iostream>

class Complex {
private:
    double real;
    double imaginary;
public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    friend Complex add(const Complex& c1, const Complex& c2);

    void print(){
        std::cout << "Result of complex number addition: " << real << " + " << imaginary << "i" << std::endl;
    }

};

Complex add(const Complex& c1, const Complex& c2) {
    double realSum = c1.real + c2.real;
    double imaginarySum = c1.imaginary + c2.imaginary;
    return Complex(realSum, imaginarySum);
}

int main() {
    const Complex c1(2.0, 3.0);
    const Complex c2(4.0, 1.5);

    Complex result = add(c1, c2);

    result.print();

    return 0;
}


/*
The program defines a class Complex with private data members real and imaginary.
It also declares a friend function add that adds two complex numbers.
The program then demonstrates how to use constant objects and friend functions to perform complex number addition.
*/
