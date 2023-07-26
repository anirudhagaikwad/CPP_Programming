/*
   Create a class 'Circle' with attributes 'radius'.
   Implement functions to calculate the area and circumference of the circle.
   Use objects to demonstrate the calculations for two circles.
*/

#include <iostream>
#include <cmath>

const double PI = 3.14159265359;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Function to calculate the area of the circle
    double area() {
        return PI * radius * radius;
    }

    // Function to calculate the circumference of the circle
    double circumference() {
        return 2 * PI * radius;
    }
};

int main() {
    Circle c1(5.0);
    Circle c2(3.5);

    std::cout << "Circle 1 Area: " << c1.area() << std::endl;
    std::cout << "Circle 1 Circumference: " << c1.circumference() << std::endl;

    std::cout << "\nCircle 2 Area: " << c2.area() << std::endl;
    std::cout << "Circle 2 Circumference: " << c2.circumference() << std::endl;

    return 0;
}

/*
This program defines a class Circle with attribute radius.
It has methods to calculate the area and circumference of the circle.
The main function demonstrates the use of objects to calculate and display the area and circumference of two circles.
*/
