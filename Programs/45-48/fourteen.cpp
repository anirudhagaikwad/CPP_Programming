/*
Imagine you are working on a weather monitoring system for a meteorological station, and you need to create a
C++ program to handle temperature conversions. You want to design a class called Temperature to represent temperature
in Celsius and provide a method to convert Celsius to Fahrenheit.

Input: 25.5
Output:
Temperature in Celsius: 25.5
Temperature in Fahrenheit: 77.9


*/

#include <iostream>

class Temperature {
private:
    double celsius;

public:
    // Explicit Constructor to convert Celsius to Fahrenheit
    explicit Temperature(double tempCelsius) {
        celsius = tempCelsius;
    }

    double getCelsius() const {
        return celsius;
    }

    double getFahrenheit() const {
        return (celsius * 9 / 5) + 32;
    }
};

int main() {
    Temperature tempCelsius(35.48);
    std::cout << "Temperature in Celsius: " << tempCelsius.getCelsius() << std::endl;
    std::cout << "Temperature in Fahrenheit: " << tempCelsius.getFahrenheit() << std::endl;
    return 0;
}

/*
This program defines a class Temperature to represent temperature in Celsius.
The constructor takes tempCelsius as an argument and sets the celsius member variable.
The getFahrenheit() method converts Celsius to Fahrenheit and returns the result.
The constructor is marked as explicit to prevent implicit conversions from Celsius to Fahrenheit.
*/


