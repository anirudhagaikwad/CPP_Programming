/*
Create a program to calculate sine, cosine, and tangent of an angle in radians using hierarchical inheritance.

angleInRadians = 3.14 / 4.0

Sine sine(angleInRadians);
Cosine cosine(angleInRadians);
Tangent tangent(angleInRadians);

sine.calculate() //Output: Sine of 0.785 radians: 0.706825
cosine.calculate() // Output: Cosine of 0.785 radians: 0.707388
tangent.calculate() //Output: Tangent of 0.785 radians: 0.999204

*/

#include <iostream>
#include <cmath>
#define M_PI 3.14

using namespace std;

class TrigonometricFunction {
protected:
    double angle;

public:
    TrigonometricFunction(double a) : angle(a) {}
    virtual double calculate() = 0;
};

class Sine : public TrigonometricFunction {
public:
    Sine(double a) : TrigonometricFunction(a) {}
    double calculate() override {
        return sin(angle);
    }
};

class Cosine : public TrigonometricFunction {
public:
    Cosine(double a) : TrigonometricFunction(a) {}
    double calculate() override {
        return cos(angle);
    }
};

class Tangent : public TrigonometricFunction {
public:
    Tangent(double a) : TrigonometricFunction(a) {}
    double calculate() override {
        return tan(angle);
    }
};

int main() {
    double angleInRadians = M_PI / 4.0; // 45 degrees in radians
    Sine sine(angleInRadians);
    Cosine cosine(angleInRadians);
    Tangent tangent(angleInRadians);

    cout << "Sine of " << angleInRadians << " radians: " << sine.calculate() << endl;
    cout << "Cosine of " << angleInRadians << " radians: " << cosine.calculate() << endl;
    cout << "Tangent of " << angleInRadians << " radians: " << tangent.calculate() << endl;

    return 0;
}

/*
This program demonstrates hierarchical inheritance to calculate trigonometric functions (sine, cosine, tangent).
The TrigonometricFunction class is an abstract base class with a pure virtual function calculate().
The Sine, Cosine, and Tangent classes inherit from TrigonometricFunction to calculate specific trigonometric functions.

*/


