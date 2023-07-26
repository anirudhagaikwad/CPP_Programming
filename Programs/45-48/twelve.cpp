/*
Create a base class "Shape" with a virtual destructor and a derived class "Circle."
Display a message when destructing objects.
*/
#include <iostream>

class Shape {
public:
    // Virtual Destructor
    virtual ~Shape() {
        std::cout << "Shape object destructed!" << std::endl;
    }
};

class Circle : public Shape {
public:
    ~Circle() {
        std::cout << "Circle object destructed!" << std::endl;
    }
};

int main() {
    Shape* shapePtr = new Circle;
    delete shapePtr; // Deleting the derived object through the base pointer
    return 0;
}

/*
This program demonstrates the use of a virtual destructor. The base class Shape has a virtual destructor,
and the derived class Circle has its own destructor.
When we delete a derived object through a base class pointer, the virtual destructor ensures that
the appropriate destructors are called for both base and derived classes.
*/
