/*

Adventura town needs a virtual simulation of the thrilling experience of driving different vehicles on their scenic trails.
Design a base class called "Vehicle," which will serve as a blueprint for all types of vehicles in Adventura.
Additionally, craft two unique derived classes, "Car" and "Bike," to embody specific types of vehicles that adventurers frequently use.
Each class in the program has a special function called "drive()." This function represents the exhilarating action of driving the corresponding
vehicle to experience a virtual journey through Adventura's captivating terrains.

Input:
Car()
Output:
Driving car.

Input:
Bike()
Output:
Riding bike.

*/

#include <iostream>

class Vehicle {
public:
    virtual void drive() {
        std::cout << "Driving generic vehicle." << std::endl;
    }
};

class Car : public Vehicle {
public:
    void drive() override {
        std::cout << "Driving car." << std::endl;
    }
};

class Bike : public Vehicle {
public:
    void drive() override {
        std::cout << "Riding bike." << std::endl;
    }
};

int main() {
    Vehicle* vehicle1 = new Car();
    Vehicle* vehicle2 = new Bike();

    vehicle1->drive();
    vehicle2->drive();

    delete vehicle1;
    delete vehicle2;

    return 0;
}

/*

The program defines a base class Vehicle and two derived classes Car and Bike.
The base class Vehicle has a virtual function drive() which is meant to be overridden by derived classes.
The Car and Bike classes override the drive() function to represent the action of driving a car and riding a bike, respectively.
In the main() function,
objects of Car and Bike are created and their respective drive() functions are called to simulate driving actions.

*/

