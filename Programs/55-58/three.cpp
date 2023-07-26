/*
Create a base class "Vehicle" with a derived class "Car" and another derived class "SportsCar."
Implement the "Vehicle" class to store the vehicle's name and display it.
The "Car" class should store the car's model and display it.
The "SportsCar" class should store the top speed of the sports car and display it.

Input:
SportsCar myCar("Ferrari", "F430", 320);
myCar.display();
Output:
Vehicle Name: Ferrari
Car Model: F430
Top Speed: 320 km/h

*/

#include <iostream>
#include <string>

// Base class Vehicle
class Vehicle {
protected:
    std::string name;

public:
    Vehicle(const std::string& n) : name(n) {}

    void display() const {
        std::cout << "Vehicle Name: " << name << std::endl;
    }
};

// Derived class Car
class Car : public Vehicle {
protected:
    std::string model;

public:
    Car(const std::string& n, const std::string& m) : Vehicle(n), model(m) {}

    void display() const {
        Vehicle::display();
        std::cout << "Car Model: " << model << std::endl;
    }
};

// Derived class SportsCar
class SportsCar : public Car {
private:
    int topSpeed;

public:
    SportsCar(const std::string& n, const std::string& m, int speed)
        : Car(n, m), topSpeed(speed) {}

    void display() const {
        Car::display();
        std::cout << "Top Speed: " << topSpeed << " km/h" << std::endl;
    }
};

int main() {
    SportsCar myCar("Ferrari", "F430", 320);
    myCar.display();

    return 0;
}

/*
This program demonstrates multilevel inheritance with a base class "Vehicle," a derived class "Car," and another derived class "SportsCar."
Each class has its own data members and functions.
The program creates an object of the "SportsCar" class and displays the vehicle name, car model, and top speed using the overridden
display function at each level of inheritance.

*/

