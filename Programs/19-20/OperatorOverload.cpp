
/*
Operator overloading is a feature in C++ that allows you to redefine the behavior of operators for user-defined data types. This means you can make operators work with your custom classes just like they do with built-in types. Operator overloading is achieved by defining special member functions called operator functions.
*/
#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Operator overloading for addition using the + operator
    Complex operator+(const Complex& other) {
        Complex result(real + other.real, imaginary + other.imaginary);
        return result;
    }

    // Operator overloading for subtraction using the - operator
    Complex operator-(const Complex& other) {
        Complex result(real - other.real, imaginary - other.imaginary);
        return result;
    }

    // Operator overloading for multiplication using the * operator
    Complex operator*(const Complex& other) {
        Complex result(
            (real * other.real) - (imaginary * other.imaginary),
            (real * other.imaginary) + (imaginary * other.real)
        );
        return result;
    }

    // Display the complex number
    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex num1(2.0, 3.0);
    Complex num2(1.0, 4.0);

    // Adding two complex numbers using the overloaded + operator
    Complex sum = num1 + num2;
    std::cout << "Sum: ";
    sum.display();

    // Subtracting two complex numbers using the overloaded - operator
    Complex diff = num1 - num2;
    std::cout << "Difference: ";
    diff.display();

    // Multiplying two complex numbers using the overloaded * operator
    Complex product = num1 * num2;
    std::cout << "Product: ";
    product.display();

    return 0;
}

/*
In this example:

1. We define a `Complex` class to represent complex numbers with real and imaginary parts.

2. We overload the `+`, `-`, and `*` operators by defining member functions for addition, subtraction, and multiplication.

3. Inside each operator function, we perform the respective mathematical operation on the real and imaginary parts of the complex numbers and return a new `Complex` object representing the result.

4. In the `main` function, we create two `Complex` objects (`num1` and `num2`) and demonstrate how to use the overloaded operators to perform arithmetic operations on them.

5. We also provide a `display` method to print the complex numbers in a readable format.

Operator overloading allows you to make your classes more intuitive and user-friendly by allowing you to use familiar operators with custom data types.

Complex operator+(const Complex& other): This line declares the operator overloading function for addition using the + operator. It's defined within the Complex class, and it takes a const Complex& other parameter, which represents the right-hand operand of the addition operation. This means it expects another Complex object to be added to the current object.

Complex result(real + other.real, imaginary + other.imaginary);: Inside the operator overloading function, a new Complex object named result is created. This object represents the result of the addition operation.

real + other.real calculates the sum of the real parts of the current object (real) and the other object (other.real).
imaginary + other.imaginary calculates the sum of the imaginary parts of the current object (imaginary) and the other object (other.imaginary).
return result;: Finally, the calculated result is returned as a new Complex object. This allows you to chain addition operations, like Complex sum = num1 + num2;, where num1 and num2 are Complex objects.


*/
