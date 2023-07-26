/*
Create a base class called Vehicle, and derive two classes Car and Bike from it.
Implement a virtual function startEngine() in the Vehicle class.
Override the startEngine() function in both Car and Bike classes to start their respective engines.

Vehicle* vehicle1 = new Car();
vehicle1->startEngine(); // Output: Car engine started.

Vehicle* vehicle2 = new Bike();
vehicle2->startEngine(); // Output: Bike engine started.

*/

#include <iostream>

class Vehicle {
public:
    // Virtual function to start the engine of any vehicle
    virtual void startEngine() {
        std::cout << "Generic vehicle engine started." << std::endl;
    }
};

class Car : public Vehicle {
public:
    // Override the startEngine() function for Car
    void startEngine() {
        std::cout << "Car engine started." << std::endl;
    }
};

class Bike : public Vehicle {
public:
    // Override the startEngine() function for Bike
    void startEngine() {
        std::cout << "Bike engine started." << std::endl;
    }
};

int main() {
    Vehicle* vehicle1 = new Car();
    Vehicle* vehicle2 = new Bike();

    vehicle1->startEngine();
    vehicle2->startEngine();

    delete vehicle1;
    delete vehicle2;

    return 0;
}

/*
In this program, we have a base class Vehicle with a virtual function startEngine().
We create two derived classes, Car and Bike, which override the startEngine() function to start their respective engines.
The main() function demonstrates polymorphism by using base class pointers to call the overridden functions.

*/

