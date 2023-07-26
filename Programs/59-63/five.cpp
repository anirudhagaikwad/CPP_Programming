/*
Create a base class "Animal" and two derived classes "FlyingAnimal" and "SwimmingAnimal."
Implement a class "Bird" that inherits from both "FlyingAnimal" and "Animal" by using virtual base classes.

Input: Bird parrot("Duck")
Output: Duck can fly. Duck can swim.

*/

#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string species;

public:
    Animal(string s) : species(s) {}
};

class FlyingAnimal : virtual public Animal {
public:
    FlyingAnimal(string s) : Animal(s) {}
    virtual void fly() const = 0; // Pure virtual function
};

class SwimmingAnimal : virtual public Animal {
public:
    SwimmingAnimal(string s) : Animal(s) {}
    virtual void swim() const = 0; // Pure virtual function
};

class Bird : public FlyingAnimal, public SwimmingAnimal {
public:
    Bird(string s) : Animal(s), FlyingAnimal(s), SwimmingAnimal(s) {}

    void fly() const override {
        cout << species << " can fly." << endl;
    }

    void swim() const override {
        cout << species << " can swim." << endl;
    }
};

int main() {
    Bird parrot("Duck");
    parrot.fly();
    parrot.swim();

    return 0;
}
