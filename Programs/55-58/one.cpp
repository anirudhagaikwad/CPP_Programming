/*
 C++ program that demonstrates the use of inheritance
*/

#include <iostream>
#include <string>
using namespace std;

// Base class: Animal
class Animal {
protected:
    string name;

public:
    Animal(const string& name) : name(name) {}

    void speak() const {
        cout << name << " makes a sound." << endl;
    }
};

// Derived class: Dog (inherits from Animal)
class Dog : public Animal {
public:
    Dog(const string& name) : Animal(name) {}

    void speak() const {
        cout << name << " barks: Woof! Woof!" << endl;
    }
};

// Derived class: Cat (inherits from Animal)
class Cat : public Animal {
public:
    Cat(const string& name) : Animal(name) {}

    void speak() const {
        cout << name << " meows: Meow! Meow!" << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Dog dog("Buddy");
    Cat cat("Whiskers");

    // Using the inherited function speak()
    cout << "Dog says: ";
    dog.speak();

    cout << "Cat says: ";
    cat.speak();

    // Using the base class pointer to access derived class methods polymorphically
    Animal* animalPtr;
    animalPtr = &dog;
    cout << "Polymorphically, Dog says: ";
    animalPtr->speak();

    animalPtr = &cat;
    cout << "Polymorphically, Cat says: ";
    animalPtr->speak();

    return 0;
}

/*
The program defines a base class Animal with a protected member name and a public member function speak().
The speak() function just outputs a generic sound message.

Two derived classes, Dog and Cat, inherit from the Animal base class.
Each derived class has its own implementation of the speak() function that outputs specific sounds for a dog and a cat.

In the main() function, objects of the Dog and Cat classes are created and their speak() methods are called directly.

The main() function also demonstrates polymorphism by using a base class pointer (Animal* animalPtr) to access the speak() method
of both the Dog and Cat objects. This allows us to treat derived objects as base objects and access their methods in a uniform way.

This is an essential feature of inheritance.
*/



