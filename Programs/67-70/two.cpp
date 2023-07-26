/*

Imagine you are developing a virtual pet simulator where users can interact with different types of animals.
To achieve this, you decide to create a C++ program that simulates the behavior of various animals.
The program will include a base class called Animal and two derived classes, Dog and Cat.

In this virtual pet world, users can select a virtual pet of their choice, either a dog or a cat, and interact with them.
Each pet will have its unique characteristics, including the sounds they make. To represent the sounds made by the animals,
each class will have a function called makeSound().

Input:
Dog(name="Buddy")
Cat(name="Whiskers")

Output:
Buddy barks: Woof Woof!
Whiskers meows: Meow Meow!

*/

#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
public:
    Animal(const std::string& n) : name(n) {}

    virtual void makeSound() {
        std::cout << "Unknown animal sound." << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(const std::string& n) : Animal(n) {}

    void makeSound() override {
        std::cout << name<<" barks: Woof Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(const std::string& n) : Animal(n) {}

    void makeSound() override {
        std::cout << name<<" meows: Meow Meow!" << std::endl;
    }
};

int main() {
    Animal* animal1 = new Dog("Buddy");
    Animal* animal2 = new Cat("Whiskers");

    animal1->makeSound();
    animal2->makeSound();

    delete animal1;
    delete animal2;

    return 0;
}

/*
The program defines a base class Animal and two derived classes Dog and Cat.
The base class Animal has a virtual function makeSound() which is meant to be overridden by derived classes.
The Dog and Cat classes override the makeSound() function to represent the sound made by a dog and a cat, respectively.
In the main() function, objects of Dog and Cat are created and their respective makeSound() functions are called to display
the sounds made by the animals.

*/

