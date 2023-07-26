/*
You work as a software engineer for a company specializing in CAD (Computer-Aided Design) software.
Your team has been assigned a task to create a C++ program that handles 3D shapes.
The program should support two types of 3D shapes: spheres and cones.
The main goal is to calculate and display the volumes of these shapes using method overriding.

Input:
Sphere(radius=5)
Cone(radius=3, height=7)

Output:
Volume of Sphere: 523.333
Volume of Cone: 65.94

*/

#include <iostream> // Include the standard input/output stream library
#include <cmath>    // Include the math library for mathematical functions
#define M_PI 3.14   // Define the constant value of pi

// Base class for 3D shapes
class Shape3D {
public:
    // Virtual function to calculate the volume of the shape (to be overridden by derived classes)
    virtual double calculateVolume() const {
        return 0.0; // Default implementation returns 0 for the volume
    }
};

// Sphere class, derived from Shape3D
class Sphere : public Shape3D {
private:
    double radius; // The radius of the sphere
public:
    // Constructor to initialize the sphere with a given radius
    Sphere(double r) : radius(r) {}

    // Overridden function to calculate the volume of the sphere
    double calculateVolume() const override {
        return (4.0 / 3.0) * M_PI * pow(radius, 3); // Volume formula for a sphere
    }
};

// Cone class, derived from Shape3D
class Cone : public Shape3D {
private:
    double radius; // The radius of the cone
    double height; // The height of the cone
public:
    // Constructor to initialize the cone with given radius and height
    Cone(double r, double h) : radius(r), height(h) {}

    // Overridden function to calculate the volume of the cone
    double calculateVolume() const override {
        return (1.0 / 3.0) * M_PI * pow(radius, 2) * height; // Volume formula for a cone
    }
};

int main() {
    // Creating instances of Sphere and Cone objects
    Shape3D* shape1 = new Sphere(5);
    Shape3D* shape2 = new Cone(3, 6);

    // Calculating and displaying the volume of each shape using their respective functions
    std::cout << "Volume of Sphere: " << shape1->calculateVolume() << std::endl;
    std::cout << "Volume of Cone: " << shape2->calculateVolume() << std::endl;

    // Cleaning up the allocated memory for the objects
    delete shape1;
    delete shape2;

    return 0;
}

/*
This C++ program defines a base class Shape3D and two derived classes Sphere and Cone. The program calculates and displays the volume of a sphere and a cone using their respective formulas. Here's a brief overview of the code:

The Shape3D class is a base class that contains a virtual function calculateVolume(), which is meant to be overridden by its derived classes. The default implementation returns 0, indicating that the volume is not defined for a generic 3D shape.

The Sphere class is a derived class from Shape3D, representing a sphere. It has a private member radius to store the sphere's radius. The constructor initializes the radius.

The Sphere class overrides the calculateVolume() function to calculate the volume of the sphere using the formula (4.0 / 3.0) * M_PI * pow(radius, 3), where M_PI is a constant defined as 3.14 (approximation of pi) using the preprocessor directive #define.

The Cone class is another derived class from Shape3D, representing a cone. It has two private members, radius and height, to store the cone's base radius and height, respectively. The constructor initializes these values.

The Cone class overrides the calculateVolume() function to calculate the volume of the cone using the formula (1.0 / 3.0) * M_PI * pow(radius, 2) * height.

In the main() function, two pointers to Shape3D objects (shape1 and shape2) are created. They are assigned the addresses of dynamically allocated Sphere and Cone objects, respectively, using the new keyword.

The volumes of the Sphere and Cone objects are calculated using the calculateVolume() function, and the results are displayed on the console using std::cout.

Finally, the dynamically allocated objects are deleted using the delete keyword to free the memory they occupied.
*/
