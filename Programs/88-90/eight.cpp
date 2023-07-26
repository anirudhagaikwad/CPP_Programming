/*
You are designing a math library to handle complex numbers in a variety of applications.
Implement a template function complexAddSubtract that takes two complex numbers as input and performs addition and subtraction operations.
The function should be able to handle complex numbers with different data types. Test the function with various scenarios involving different
data types for complex numbers.

Input:
Integer Complex Numbers:
Number 1: 3 + 2i
Number 2: 1 + 5i

Output:
Addition: 4 + 7i
Subtraction: 2 - 3i

Input:
Floating-Point Complex Numbers:
Number 3: 2.5 + 3.1i
Number 4: 1.2 + 4i

Output:
Addition: 3.7 + 7.1i
Subtraction: 1.3 - 0.9i

*/

#include <iostream>
using namespace std;

// Complex number class template
template <typename T>
class Complex {
private:
    T real;
    T imaginary;

public:
    Complex(T real, T imaginary) : real(real), imaginary(imaginary) {}

    // Addition operator overload
    Complex<T> operator+(const Complex<T>& other) const {
        return Complex<T>(real + other.real, imaginary + other.imaginary);
    }

    // Subtraction operator overload
    Complex<T> operator-(const Complex<T>& other) const {
        return Complex<T>(real - other.real, imaginary - other.imaginary);
    }

    // Display the complex number
    void display() const {
        cout << real;
        if (imaginary >= 0) {
            cout << " + " << imaginary << "i";
        } else {
            cout << " - " << -imaginary << "i";
        }
        cout << endl;
    }
};

int main() {
    // Test with integers
    Complex<int> num1(3, 2);
    Complex<int> num2(1, 5);
    cout << "Integer Complex Numbers:" << endl;
    cout << "Number 1: ";
    num1.display();            // Output: Number 1: 3 + 2i
    cout << "Number 2: ";
    num2.display();            // Output: Number 2: 1 + 5i
    cout << "Addition: ";
    (num1 + num2).display();   // Output: Addition: 4 + 7i
    cout << "Subtraction: ";
    (num1 - num2).display();   // Output: Subtraction: 2 - 3i

    // Test with floating-point numbers
    Complex<float> num3(2.5f, 3.1f);
    Complex<float> num4(1.2f, 4.0f);
    cout << "\nFloating-Point Complex Numbers:" << endl;
    cout << "Number 3: ";
    num3.display();            // Output: Number 3: 2.5 + 3.1i
    cout << "Number 4: ";
    num4.display();            // Output: Number 4: 1.2 + 4i
    cout << "Addition: ";
    (num3 + num4).display();   // Output: Addition: 3.7 + 7.1i
    cout << "Subtraction: ";
    (num3 - num4).display();   // Output: Subtraction: 1.3 - 0.9i

    return 0;
}

/*
The program defines a class template Complex to represent complex numbers with real and imaginary parts of the same data type (T).
The class template overloads the + and - operators to perform addition and subtraction on complex numbers, respectively.
The display method is provided to print the complex number in the format real + imaginary i.
In the main function, we create complex numbers using the template for both integer and floating-point data types (int and float).
We perform addition and subtraction operations on complex numbers and display the results. The output will show the addition and subtraction of the complex numbers with the respective data types.
*/
