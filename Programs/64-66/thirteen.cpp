/*
Design a hierarchy of vehicles, including a base class for Vehicle and derived classes for Car and Bike.
Each class should have specific attributes like the number of wheels and fuel type.

Input:
Car car(4, "Petrol", 4);
car.displayInfo();
Output:
Car Info:
Number of Wheels: 4
Fuel Type: Petrol
Number of Doors: 4

Input:
Bike bike(2, "None", true);
bike.displayInfo();
Output:
Bike Info:
Number of Wheels: 2
Fuel Type: None
Has Gears: Yes

*/

#include <iostream>
#include <string>
using namespace std;

// Base class representing a Vehicle
class Vehicle {
protected:
    int numWheels;
    string fuelType;
public:
    // Constructor for the Vehicle class
    Vehicle(int _numWheels, string _fuelType) : numWheels(_numWheels), fuelType(_fuelType) {}

    // Method to display information about the vehicle
    void displayInfo() const {
        cout << "Number of Wheels: " << numWheels << "\nFuel Type: " << fuelType << endl;
    }
};

// Derived class representing a Car, inheriting from Vehicle
class Car : public Vehicle {
private:
    int numDoors;
public:
    // Constructor for the Car class, which also calls the constructor of the base class (Vehicle)
    Car(int _numWheels, string _fuelType, int _numDoors)
        : Vehicle(_numWheels, _fuelType), numDoors(_numDoors) {}

    // Method to display information about the car, including information from the base class
    void displayInfo() const {
        // Calling the displayInfo method of the base class (Vehicle)
        Vehicle::displayInfo();
        cout << "Number of Doors: " << numDoors << endl;
    }
};

// Derived class representing a Bike, inheriting from Vehicle
class Bike : public Vehicle {
private:
    bool hasGears;
public:
    // Constructor for the Bike class, which also calls the constructor of the base class (Vehicle)
    Bike(int _numWheels, string _fuelType, bool _hasGears)
        : Vehicle(_numWheels, _fuelType), hasGears(_hasGears) {}

    // Method to display information about the bike, including information from the base class
    void displayInfo() const {
        // Calling the displayInfo method of the base class (Vehicle)
        Vehicle::displayInfo();
        cout << "Has Gears: " << (hasGears ? "Yes" : "No") << endl;
    }
};

int main() {
    // Creating objects of the derived classes (Car and Bike)
    Car car(4, "Petrol", 4);
    Bike bike(2, "None", true);

    cout << "Car Info:\n";
    // Calling the displayInfo method of the Car class
    car.displayInfo();

    cout << "\nBike Info:\n";
    // Calling the displayInfo method of the Bike class
    bike.displayInfo();

    return 0;
}

/*
This program demonstrates inheritance with constructors using the "Vehicle Inheritance" example. The program defines a base class Vehicle, representing a generic vehicle, with attributes numWheels and fuelType. It also has a method displayInfo() to display the vehicle's information.

The program then defines two derived classes: Car and Bike, both inheriting from the Vehicle class. Each derived class has its own attributes (numDoors for Car and hasGears for Bike) and overrides the displayInfo() method to include specific information about the derived class.

In the main() function, we create objects of the derived classes (Car and Bike). When we call displayInfo() on these objects, it dynamically dispatches the appropriate method based on the actual type of the object. This demonstrates polymorphism, as the base class pointer (Vehicle*) can point to objects of its derived classes and call the appropriate method.

In this program, the displayInfo() method of the Car class displays the vehicle's information, including the number of doors specific to a car. Similarly, the displayInfo() method of the Bike class displays the vehicle's information, including whether it has gears or not, specific to a bike.

*/




