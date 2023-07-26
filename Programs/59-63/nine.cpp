/*
 Create a program that manages vehicle information, including the make, model, and engine horsepower for cars.

Car car("Toyota", "Camry", 200);
car.displayInfo(); // Make: Toyota, Model: Camry
car.displayHorsepower(); // Horsepower: 200 HP

*/

#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;

public:
    Vehicle(string mk, string mdl) : make(mk), model(mdl) {}
    void displayInfo() {
        cout << "Make: " << make << ", Model: " << model << endl;
    }
};

class Engine {
protected:
    double horsepower;

public:
    Engine(double hp) : horsepower(hp) {}
    void displayHorsepower() {
        cout << "Horsepower: " << horsepower << " HP" << endl;
    }
};

class Car : public Vehicle, public Engine {
public:
    Car(string mk, string mdl, double hp) : Vehicle(mk, mdl), Engine(hp) {}
};

int main() {
    Car car("Toyota", "Camry", 200);
    car.displayInfo();
    car.displayHorsepower();
    return 0;
}


/*
This program demonstrates hybrid inheritance with a vehicle management system.
The Vehicle class contains information about the make and model of the vehicle.
The Engine class contains information about the horsepower of the engine.
The Car class inherits from both Vehicle and Engine, creating a hybrid inheritance structure.

*/
