
/* Write a program to perform operations on circles.
 The program should have functions to calculate the area and circumference of a circle.
 The radius of the circle should be taken as an argument, with a default value of 5.
*/


#include <iostream>
#include <cmath>

// Function prototypes with default arguments
double calculateCircleArea(double radius = 5.0);
double calculateCircleCircumference(double radius = 5.0);

int main()
{
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    double area = calculateCircleArea(radius);
    double circumference = calculateCircleCircumference(radius);
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}

// Function definitions
double calculateCircleArea(double radius)
{
    return M_PI * radius * radius;
}

double calculateCircleCircumference(double radius)
{
    return 2 * M_PI * radius;
}

// The program calculates the area and circumference of a circle based on the radius provided as an argument to the respective functions.
// If no radius is provided, the default value of 5 is used.
