/*

Create a C++ program to demonstrate the usage of exception handling with the bad_cast exception.
The program should define a base class Shape, and two derived classes, Circle and Square. Each derived class should override the draw()
method to print a message specific to the shape being drawn.
In the main() function, create a pointer shapePtr of type Shape*. Attempt to perform a dynamic cast using dynamic_cast to convert
shapePtr to a Circle* pointer. Since shapePtr points to an object of the base class Shape, and not a Circle object, the dynamic cast will fail,
resulting in a bad_cast exception being thrown.
Implement a try-catch block to handle the bad_cast exception.

Input:  shapePtr = new Shape;
        Circle* circlePtr = dynamic_cast<Circle*>(shapePtr);
Output: Exception: std::bad_cast

*/

#include <iostream>
#include <typeinfo>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shapePtr;

    try {
        // Attempt to cast a Shape pointer to a Circle pointer
        shapePtr = new Shape;
        Circle* circlePtr = dynamic_cast<Circle*>(shapePtr);

        // If the cast is unsuccessful, 'dynamic_cast' throws a 'bad_cast' exception
        if (!circlePtr) {
            throw bad_cast();
        }

        // If the cast is successful, use the Circle pointer to draw a circle
        circlePtr->draw();

        delete shapePtr;
    } catch (const bad_cast& e) {
        // Catch the 'bad_cast' exception if the dynamic cast fails
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

/*

This C++ program demonstrates the use of exception handling with the bad_cast exception. The program defines a base class Shape and two derived classes, Circle and Square. The Circle and Square classes override the draw() method to draw a circle and square, respectively.

In the main() function, a pointer shapePtr of type Shape* is created. The program then attempts to perform a dynamic cast using dynamic_cast to convert shapePtr to a Circle* pointer. Since shapePtr points to an object of the base class Shape, and not a Circle object, the dynamic cast will fail, resulting in a bad_cast exception being thrown.

The program uses a try-catch block to handle the bad_cast exception. If the dynamic cast fails (i.e., circlePtr is a null pointer), the catch block catches the bad_cast exception and displays an appropriate error message. Otherwise, if the dynamic cast is successful (which is not the case in this program), the program would proceed to draw a circle using the circlePtr.

This example demonstrates how to handle the bad_cast exception when attempting to perform a dynamic cast between polymorphic classes. The bad_cast exception is thrown when the dynamic cast fails due to an incorrect cast between related classes. It allows the program to handle type conversion errors gracefully and provides informative feedback to the user or programmer about the failed cast operation.

*/


