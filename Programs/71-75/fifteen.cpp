/*
Create an abstract class Vehicle with a non-pure virtual function drive().
Add a protected data member 'type' to the Vehicle class.
Derive classes Car and Bike from Vehicle and implement the drive() function in each.
Use these classes to demonstrate accessing the protected data member from derived classes.

Vehicle* vehicles[2];
vehicles[0] = new Car;
vehicles[1] = new Bike;

vehicles[0]->drive(); // Output: Driving a car.
vehicles[1]->drive(); // Output: Riding a bike.


*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string type; // Protected data member

public:
    // Constructor to initialize the 'type' of the vehicle
    Vehicle(const string& t) : type(t) {}

    // Non-pure virtual function 'drive()'.
    // It provides a default implementation to be used if the derived classes do not override it.
    virtual void drive() {
        cout << "Unknown vehicle driving." << endl;
    }
};

class Car : public Vehicle {
public:
    Car() : Vehicle("Car") {}

    // Override of the 'drive()' function for the 'Car' class.
    void drive() override {
        cout << "Driving a car." << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike() : Vehicle("Bike") {}

    // Override of the 'drive()' function for the 'Bike' class.
    void drive() override {
        cout << "Riding a bike." << endl;
    }
};

int main() {
    // Creating an array of pointers to the base class 'Vehicle'.
    Vehicle* vehicles[2];

    // Creating objects of 'Car' and 'Bike' and storing their addresses in the 'vehicles' array.
    vehicles[0] = new Car;
    vehicles[1] = new Bike;

    // Loop through the array and call the 'drive()' function for each vehicle using the base class pointer.
    // This demonstrates polymorphism, where the correct version of the 'drive()' function is called based on the actual object type.
    for (int i = 0; i < 2; i++) {
        vehicles[i]->drive(); // Calls the overridden function in each derived class
    }

    // Cleaning up the dynamically allocated objects.
    for (int i = 0; i < 2; i++) {
        delete vehicles[i];
    }

    return 0;
}

/*
This C++ program demonstrates the use of inheritance and polymorphism with classes representing Vehicles.
The base class 'Vehicle' has a protected data member 'type' and a non-pure virtual function 'drive()'.
The derived classes 'Car' and 'Bike' override the 'drive()' function to provide specific implementations.

*/




