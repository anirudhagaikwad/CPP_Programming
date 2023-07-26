/*

In a virtual reality game, the players are exploring a fantasy world filled with magical objects.
As part of their adventure, they come across enchanted circles and cylinders with unique properties.
To help the players understand these objects, you need to create a program that calculate area of circle and volume of the
cylinder.Cylinder should inherit properties of Circle.

Input: radius: 5
       height: 7

Output:
Cylinder's Volume: 549.5

*/

#include <iostream> // Include the standard input/output stream library
#include <cmath>    // Include the math library for mathematical functions
#define M_PI 3.14   // Define the constant value of pi

// Base class: Circle
class Circle {
protected:
    double radius; // Protected data member to store the radius of the circle

public:
    // Constructor to initialize the radius of the circle
    Circle(double r) : radius(r) {}

    // Function to calculate the area of the circle
    double calculateArea() {
        return M_PI * radius * radius; // Area formula for a circle
    }
};

// Derived class: Cylinder (inherits from Circle)
class Cylinder : public Circle {
private:
    double height; // Private data member to store the height of the cylinder

public:
    // Constructor to initialize the radius and height of the cylinder using the Circle's constructor
    Cylinder(double r, double h) : Circle(r), height(h) {}

    // Function to calculate the volume of the cylinder
    double calculateVolume() {
        return calculateArea() * height; // Volume formula for a cylinder: area of base * height
    }
};

int main() {
    double radius, height;
    std::cout << "Enter radius: ";
    std::cin >> radius;
    std::cout << "Enter height: ";
    std::cin >> height;

    Cylinder cylinder(radius, height); // Create a Cylinder object with the given radius and height
    std::cout << "Cylinder's Volume: " << cylinder.calculateVolume() << std::endl;

    return 0;
}

/*
This C++ program calculates and displays the volume of a cylinder by utilizing the concept of inheritance. The program includes a Circle class as the base class and a Cylinder class as the derived class, which inherits from the Circle class.

Circle: The Circle class contains a protected data member radius to store the radius of the circle. It has a constructor that initializes the radius. The class also includes a function calculateArea() that calculates the area of the circle using the formula M_PI * radius * radius, where M_PI is a constant defined as 3.14 (approximation of pi) using the preprocessor directive #define.

Cylinder: The Cylinder class is the derived class that inherits from Circle. It includes a private data member height to store the height of the cylinder. The constructor of the Cylinder class initializes both the radius (inherited from Circle) and height using the constructor of the Circle class.

calculateVolume(): The Cylinder class defines a function calculateVolume() that calculates the volume of the cylinder. It utilizes the calculateArea() function inherited from Circle to calculate the area of the circular base of the cylinder and then multiplies it by the height to obtain the volume of the cylinder.

In the main() function, the user is prompted to enter the values of radius and height. A Cylinder object is then created using these provided values, and its volume is calculated and displayed on the console.

The program demonstrates the use of inheritance in C++ to build a simple relationship between the Circle and Cylinder classes, where the Cylinder class can leverage the functionalities of the Circle class (specifically the calculateArea() function) and extend it to calculate the volume of the cylinder.

*/



