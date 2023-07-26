/*
Create a class Complex to represent complex numbers.
Implement a method to add two complex numbers.
*/

#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex add(const Complex& other) {
        double r = real + other.real;
        double i = imaginary + other.imaginary;
        return Complex(r, i);
    }

    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex num1(3.5, 2.0);
    Complex num2(1.5, 5.0);
    Complex sum = num1.add(num2);
    sum.display();
    return 0;
}

/*
This program defines a class Complex to represent complex numbers.
The method add() adds two complex numbers and returns the result.
*/
