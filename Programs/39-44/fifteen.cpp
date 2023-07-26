/*
 Implement a Circle class to calculate the area of the circle.
 Function should restrict the function to modify the object state.

 Input: Enter the radius of the circle: 8
 Output: Area of the circle: 201.062

*/

#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Constant member function to calculate the area of the circle
    double calculateArea() const {
        return M_PI * radius * radius;
    }
};

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    Circle circle(radius);
    std::cout << "Area of the circle: " << circle.calculateArea() << std::endl;

    return 0;
}

/*
The program defines a Circle class with a constructor to initialize the radius.
The calculateArea() function is marked as constant using the const keyword, indicating that it won't
modify the object's state.
It calculates the area of the circle using the formula π * radius^2 and returns the result.
*/
