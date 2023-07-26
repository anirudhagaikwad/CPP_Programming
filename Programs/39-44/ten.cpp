/*
Create a C++ program to add two 3D vectors using friend functions and handle constant objects properly.

Input:  v1(1.0, 2.0, 3.0);
        v2(4.0, 5.0, 6.0)
Output:
Result of vector addition: (5, 7, 9)

*/

#include <iostream>

class Vector3D {
private:
    double x;
    double y;
    double z;
public:
    Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

    friend Vector3D add(const Vector3D& v1, const Vector3D& v2);


    void print(){
     std::cout << "Result of vector addition: (" << x << ", " << y << ", " << z << ")" << std::endl;}
};

Vector3D add(const Vector3D& v1, const Vector3D& v2) {
    double sumX = v1.x + v2.x;
    double sumY = v1.y + v2.y;
    double sumZ = v1.z + v2.z;
    return Vector3D(sumX, sumY, sumZ);
}

int main() {
    const Vector3D v1(1.0, 2.0, 3.0);
    const Vector3D v2(4.0, 5.0, 6.0);

    Vector3D result = add(v1, v2);

    result.print();

    return 0;
}


/*
 The program defines a class Vector3D with private data members x, y, and z.
 It also declares a friend function add that adds two 3D vectors.
 The program then demonstrates how to use constant objects and friend functions to perform vector addition.
*/
