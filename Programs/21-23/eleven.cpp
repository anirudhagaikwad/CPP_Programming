/*
Alex is a software developer working on a project that involves calculating the sum of different sets of numbers.
The project requires a C++ program to calculate the sum of two integers, three integers, and two floats using the same method name.

Example:
Enter two integers: 4 5
Sum of two integers: 9
Enter three integers: 24 53 1
Sum of three integers: 78
Enter two floats: 4.5 3.2
Sum of two floats: 7.7

*/

#include<iostream>

// Calculate the sum of two integers
int calculateSum(int num1, int num2)
{
    return num1 + num2;
}

// Calculate the sum of three integers
int calculateSum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

// Calculate the sum of two floats
float calculateSum(float num1, float num2)
{
    return num1 + num2;
}

int main()
{

    int num1, num2, num3;
    float float1, float2;

    // Two integers
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    std::cout << "Sum of two integers: " << calculateSum(num1, num2) << std::endl;

    // Three integers
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;
    std::cout << "Sum of three integers: " << calculateSum(num1, num2, num3) << std::endl;

    // Two floats
    std::cout << "Enter two floats: ";
    std::cin >> float1 >> float2;
    std::cout << "Sum of two floats: " << calculateSum(float1, float2) << std::endl;

    return 0;
}

/*
above program uses concept of method overloading to achieve the solution.
*/
