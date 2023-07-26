/*
Implement a base class "Shape" with a virtual function "display()" that displays "Shape."
Implement two derived classes "Circle" and "Rectangle" that override the "display()" function to display "Circle" and "Rectangle," respectively.
Perform upcasting and downcasting with base class pointers.


Shape* shape1 = new Circle;
shape1->display(); // Output: Circle

Shape* shape2 = new Rectangle;
shape2->display(); // Output: Rectangle

*/

#include <iostream>

// Base class Shape
class Shape {
public:
    virtual void display() const {
        std::cout << "Shape" << std::endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void display() const override {
        std::cout << "Circle" << std::endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void display() const override {
        std::cout << "Rectangle" << std::endl;
    }
};

int main() {
    Shape* shape1 = new Circle;
    Shape* shape2 = new Rectangle;

    shape1->display(); // Output: Circle
    shape2->display(); // Output: Rectangle

    Circle* circle = dynamic_cast<Circle*>(shape1);
    if (circle != nullptr) {
        circle->display(); // Output: Circle
    }

    Rectangle* rectangle = dynamic_cast<Rectangle*>(shape2);
    if (rectangle != nullptr) {
        rectangle->display(); // Output: Rectangle
    }

    delete shape1;
    delete shape2;

    return 0;
}

/*
This program demonstrates upcasting and downcasting using base class pointers.
The "Shape" class has a virtual function "display()" that displays "Shape."
Both "Circle" and "Rectangle" classes override this function to display their respective names.
In the main function, two pointers of the base class "Shape" are used to store objects of "Circle" and "Rectangle" classes.
The base class pointers demonstrate upcasting.

*/
