/*
Implement a base class "Animal" with two derived classes "Mammal" and "Bird."
Add a function "sound()" to the "Animal" class that displays "Unknown sound." Override the "sound()" function in both "Mammal"
and "Bird" to display their respective sounds.

Input:
Animal.sound()
Mammal.sound()
Bird.sound()
Output:
Unknown sound
Mammal sound: Roar
Bird sound: Chirp

*/

#include <iostream>
#include <string>

// Base class Animal
class Animal {
public:
    virtual void sound() const {
        std::cout << "Unknown sound" << std::endl;
    }
};

// Derived class Mammal
class Mammal : public Animal {
public:
    void sound() const override {
        std::cout << "Mammal sound: Roar" << std::endl;
    }
};

// Derived class Bird
class Bird : public Animal {
public:
    void sound() const override {
        std::cout << "Bird sound: Chirp" << std::endl;
    }
};

int main() {
    Animal* animals[3];
    animals[0] = new Animal;
    animals[1] = new Mammal;
    animals[2] = new Bird;

    for (int i = 0; i < 3; ++i) {
        animals[i]->sound();
        delete animals[i];
    }

    return 0;
}

/*
This program demonstrates hierarchical inheritance by creating a base class "Animal" and two derived classes "Mammal" and "Bird."
The "Animal" class has a virtual function "sound()" that displays "Unknown sound." Both "Mammal" and "Bird" override this function
to display their specific sounds. In the main function, an array of pointers to "Animal" is created, and objects of both derived
classes are stored in it. The sound of each animal is displayed using the virtual function.

*/
