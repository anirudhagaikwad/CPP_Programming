/*
Design a C++ program for a complex number addition calculator.
The calculator will allow users to perform addition of two complex numbers and three complex numbers using method overloading.

Example:

Enter the real and imaginary parts of complex number 1: 2 8
Enter the real and imaginary parts of complex number 2: 4 9
Sum of two complex numbers: 6 + 17i
Enter the real and imaginary parts of complex number 3: 4 12
Sum of three complex numbers: 10 + 29i

*/

#include<iostream>


// Add two complex numbers
void addComplex(int real1, int imag1, int real2, int imag2)
{
    int realSum = real1 + real2;
    int imagSum = imag1 + imag2;
    std::cout << "Sum of two complex numbers: " << realSum << " + " << imagSum << "i" << std::endl;
}

// Add three complex numbers
void addComplex(int real1, int imag1, int real2, int imag2, int real3, int imag3)
{
    int realSum = real1 + real2 + real3;
    int imagSum = imag1 + imag2 + imag3;
    std::cout << "Sum of three complex numbers: " << realSum << " + " << imagSum << "i" << std::endl;
}


int main()
{

    int real1, imag1, real2, imag2, real3, imag3;

    // Two complex numbers
    std::cout << "Enter the real and imaginary parts of complex number 1: ";
    std::cin >> real1 >> imag1;
    std::cout << "Enter the real and imaginary parts of complex number 2: ";
    std::cin >> real2 >> imag2;
    addComplex(real1, imag1, real2, imag2);

    // Three complex numbers
    std::cout << "Enter the real and imaginary parts of complex number 3: ";
    std::cin >> real3 >> imag3;
    addComplex(real1, imag1, real2, imag2, real3, imag3);

    return 0;
}

/*
C++ program  utilize method overloading to handle addition for both two and three complex numbers.
The program would prompt the user for real and imaginary parts of the complex numbers and display the results of the addition operations.
It provides a user-friendly interface for performing complex number addition calculations with ease.

*/



