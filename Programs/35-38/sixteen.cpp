/*
   Create a class 'Vector' with attributes 'x' and 'y'.
   Implement functions to add and display vectors.
   Use objects to demonstrate vector addition.
*/

#include <iostream>

class Vector {
private:
    double x;
    double y;

public:
    // Constructor
    Vector(double x_, double y_) : x(x_), y(y_) {}

    // Function to add vectors
    void add(const Vector& other) {
        x += other.x;
        y += other.y;
    }

    // Function to display vector
    void display() {
        std::cout << "Vector: (" << x << ", " << y << ")\n";
    }
};

int main() {
    Vector v1(2.5, 3.0);
    Vector v2(1.5, -2.0);

    v1.add(v2);
    v1.display();

    return 0;
}

/*
This program defines a class Vector with attributes x and y.
It has a method to add two vectors and display the result.
The main function demonstrates the use of objects to perform vector addition
*/

