/*
 Implement a base class "Vehicle" with two derived classes "Car" and "Bike."
 Add a virtual function "start()" in the base class and override it in the derived classes to display their respective starting messages.

 Input: Car.start()
 Output: Car starting...

 Input: Bike.start()
 Output: Bike starting...

*/


#include <iostream>

// Base class Vehicle
class Vehicle {
public:
    virtual void start() const {
        std::cout << "Vehicle starting..." << std::endl;
    }
};

// Derived class Car
class Car : public Vehicle {
public:
    void start() const override {
        std::cout << "Car starting..." << std::endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
public:
    void start() const override {
        std::cout << "Bike starting..." << std::endl;
    }
};

int main() {
    Vehicle* v1 = new Car;
    Vehicle* v2 = new Bike;

    v1->start();
    v2->start();

    delete v1;
    delete v2;

    return 0;
}

/*
This program demonstrates the use of virtual functions in base and derived classes.
The "Vehicle" class has a virtual function "start()" that displays "Vehicle starting...". Both "Car" and "Bike" classes
override this function to display their respective starting messages. In the main function, pointers to "Vehicle" objects are used to
create objects of both "Car" and "Bike" classes, and the appropriate "start()" function is called using dynamic dispatch due to the use
of virtual functions.

*/


