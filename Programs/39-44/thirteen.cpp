/*
Create a Vector class that represents a 2D vector with attributes x and y.
Implement a function that takes two Vector objects as parameters and
returns a new Vector object representing the sum of the two input vectors.
*/

#include <iostream>

class Vector {
public:
    double x;
    double y;

    Vector(double _x, double _y) : x(_x), y(_y) {}
};

// Function to add two Vector objects and return a new Vector
Vector addVectors(const Vector& v1, const Vector& v2) {
    double sumX = v1.x + v2.x;
    double sumY = v1.y + v2.y;
    return Vector(sumX, sumY);
}

int main() {
    Vector v1(3.0, 2.0);
    Vector v2(1.5, 4.5);

    Vector result = addVectors(v1, v2);

    std::cout << "Sum: (" << result.x << ", " << result.y << ")" << std::endl;

    return 0;
}
