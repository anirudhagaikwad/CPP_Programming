/*
Create a base class "Animal" with a constructor and a derived class "Dog" with its own constructor.
Display the names of the animals.
*/

#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    // Constructor
    Animal(const std::string& n) : name(n) {}

    void displayInfo() {
        std::cout << "Animal Name: " << name << std::endl;
    }
};

class Dog : public Animal {
public:
    // Derived class constructor
    Dog(const std::string& n) : Animal(n) {}

    void displayInfo() {
        std::cout << "Dog Name: " << name << std::endl;
    }
};

int main() {
    Animal a("Tiger");
    Dog d("Buddy");
    a.displayInfo(); // Animal Name: Tiger
    d.displayInfo(); // Dog Name: Buddy
    return 0;
}

/*
This program demonstrates inheritance, with a base class Animal and a derived class Dog.
The base class has a constructor to initialize the name attribute, and the derived class calls the base
class constructor using the member initialization list.
*/
