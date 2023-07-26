/*
Create a base class "Animal" with a virtual function "speak()" that displays "Animal sound."
Implement two derived classes "Dog" and "Cat" that override the "speak()" function to display "Woof" and "Meow," respectively.
*/

#include <iostream>

// Base class Animal
class Animal {
public:
    virtual void speak() const {
        std::cout << "Animal sound" << std::endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Woof" << std::endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Meow" << std::endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Dog;
    animals[1] = new Cat;

    for (int i = 0; i < 2; ++i) {
        animals[i]->speak();
        delete animals[i];
    }

    return 0;
}

/*
This program demonstrates runtime polymorphism using virtual functions.
The "Animal" class has a virtual function "speak()" that displays "Animal sound." Both "Dog" and "Cat" classes override
this function to display "Woof" and "Meow," respectively. In the main function, pointers to "Animal" objects are used to create
objects of both "Dog" and "Cat" classes.
The appropriate "speak()" function is called using dynamic dispatch, displaying the sound of each animal.

*/

