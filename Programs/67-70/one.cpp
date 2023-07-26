/*
You are tasked with creating a C++ program to build a Shape calculator application.
The application should allow users to calculate the area of different shapes.
The program should include a base class called Shape and two derived classes, Rectangle and Circle.

Input:
Rectangle(5, 3)
Circle(4)

Output:
Area of Rectangle: 15
Area of Circle: 50.24

*/

#include <iostream>

class Shape {
public:
    virtual void calculateArea() {
        std::cout << "Area calculation not defined for generic shape." << std::endl;
    }
};

class Rectangle : public Shape {
private:
    int length, width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}

    void calculateArea() override {
        std::cout << "Area of Rectangle: " << length * width << std::endl;
    }
};

class Circle : public Shape {
private:
    int radius;
public:
    Circle(int r) : radius(r) {}

    void calculateArea() override {
        std::cout << "Area of Circle: " << 3.14 * radius * radius << std::endl;
    }
};

int main() {
    Shape* shape1 = new Rectangle(5, 3);
    Shape* shape2 = new Circle(4);

    shape1->calculateArea();
    shape2->calculateArea();

    delete shape1;
    delete shape2;

    return 0;
}


/*
The program defines a base class Shape and two derived classes Rectangle and Circle.
The base class Shape has a virtual function calculateArea() which is meant to be overridden by derived classes.
The Rectangle and Circle classes override the calculateArea() function to calculate the area of the rectangle and circle shapes,
respectively. In the main() function, objects of Rectangle and Circle are created and their respective calculateArea() functions are called to display the calculated areas.
*/
