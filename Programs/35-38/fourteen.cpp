/*
   Create a class 'Car' with attributes 'brand', 'model', and 'year'.
   Implement functions to set and display car details.
   Use objects to set and display details of two cars.
*/

#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    // Function to set car details
    void setDetails(std::string b, std::string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Function to display car details
    void displayDetails() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main() {
    Car car1, car2;
    car1.setDetails("Toyota", "Corolla", 2020);
    car2.setDetails("Honda", "Civic", 2019);

    std::cout << "Car 1 Details:\n";
    car1.displayDetails();

    std::cout << "\nCar 2 Details:\n";
    car2.displayDetails();

    return 0;
}
