/*
Create a base class called Animal, and derive two classes Cat and Dog from it.
Implement a virtual function makeSound() in the Animal class, which prints "Generic animal sound."
Now, create objects of Cat and Dog, and use a base class pointer to call the makeSound() function.
*/

#include <iostream>

class Animal {
public:
    // Virtual function to make a generic animal sound
    virtual void makeSound() {
        std::cout << "Generic animal sound." << std::endl;
    }
};

class Cat : public Animal {
public:
    // Override the makeSound() function for Cat
    void makeSound() {
        std::cout << "Meow!" << std::endl;
    }
};

class Dog : public Animal {
public:
    // Override the makeSound() function for Dog
    void makeSound() {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Cat fluffy;
    Dog rover;

    Animal* animal1 = &fluffy;
    Animal* animal2 = &rover;

    animal1->makeSound(); // Output: Meow!
    animal2->makeSound(); // Output: Woof!

    return 0;
}

/*
In this program, we have a base class Animal with a virtual function makeSound().
We create two derived classes, Cat and Dog, which override the makeSound() function to make their specific sounds.
In the main() function, we create objects of Cat and Dog, and then use a base class pointer to call the makeSound()
function for each object.
This demonstrates the dynamic binding and method overriding at runtime.

*/

