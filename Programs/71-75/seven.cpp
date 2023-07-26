/*
Create an abstract class Animal with a pure virtual function sound().
Provide a default implementation of the sound() function in Animal.
Derive two classes Cat and Dog from Animal and override the sound() function in each.
Use these classes to demonstrate default and overridden sounds.

Input:
Animal* animals[3];
animals[0] = new Cat;
animals[1] = new Dog;
animals[2] = new Animal;

animals[i]->sound(); // i= 0 to 3

Output:
Meow
Woof
Unknown sound

*/


#include <iostream>
using namespace std;

class Animal {
public:
    // Pure virtual function 'sound()' with a default implementation.
    // This function is meant to be overridden by derived classes to provide specific sound implementations for each animal.
    virtual void sound() {
        cout << "Unknown sound" << endl;
    }
};

class Cat : public Animal {
public:
    // Override of the 'sound()' function for the 'Cat' class.
    // Provides the specific sound implementation for cats: "Meow"
    void sound() override {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    // Override of the 'sound()' function for the 'Dog' class.
    // Provides the specific sound implementation for dogs: "Woof"
    void sound() override {
        cout << "Woof" << endl;
    }
};

int main() {
    // Creating an array of pointers to the base class 'Animal'.
    Animal* animals[3];

    // Creating objects of 'Cat' and 'Dog' and storing their addresses in the 'animals' array.
    animals[0] = new Cat;
    animals[1] = new Dog;

    // Since 'Animal' is an abstract class, it cannot be instantiated directly.
    // Therefore, a default-constructed 'Animal' object is created using the default constructor, but it will still call the 'sound()' function of the derived class.
    animals[2] = new Animal;

    // Loop through the array and call the 'sound()' function for each animal using the base class pointer.
    // This demonstrates polymorphism, as the correct version of the 'sound()' function is called based on the actual object type at runtime.
    for (int i = 0; i < 3; i++) {
        animals[i]->sound();
    }

    // Cleaning up the dynamically allocated objects.
    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}

/*

This C++ program demonstrates the use of polymorphism with virtual functions in a base class and its derived classes.
The class 'Animal' has a pure virtual function 'sound()', which acts as an interface for sound production.
The derived classes 'Cat' and 'Dog' override the 'sound()' function to provide specific sound implementations for each animal.
The program creates objects of 'Cat' and 'Dog' using base class pointers and demonstrates polymorphism to call the correct 'sound()'
function based on the actual object type at runtime.


*/


