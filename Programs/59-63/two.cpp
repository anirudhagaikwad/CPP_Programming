/*
Create a program that manages animal information, including species and characteristics such as legs for mammals and
flying ability for birds. Create a base class Animal Create two derived classed that inherit from Base as class Mammal and
class Bird. Print Species and Legs for Mammals and print Species and Can fly for Birds.

Input:
Mammal lion("Lion", 4)

Output:
Species: Lion
Legs: 4

Input:
Bird sparrow("Sparrow", true)

Output:
Species: Sparrow
Can Fly: Yes

*/

#include <iostream>
using namespace std;

class Animal {
protected:
    string species;

public:
    Animal(string sp) : species(sp) {}
    void displaySpecies() {
        cout << "Species: " << species << endl;
    }
};

class Mammal : public Animal {
protected:
    int legs;

public:
    Mammal(string sp, int lg) : Animal(sp), legs(lg) {}
    void displayLegs() {
        cout << "Legs: " << legs << endl;
    }
};

class Bird : public Animal {
protected:
    bool canFly;

public:
    Bird(string sp, bool fly) : Animal(sp), canFly(fly) {}
    void displayFly() {
        cout << "Can Fly: " << (canFly ? "Yes" : "No") << endl;
    }
};

int main() {
    Mammal lion("Lion", 4);
    Bird sparrow("Sparrow", true);

    lion.displaySpecies();
    lion.displayLegs();

    sparrow.displaySpecies();
    sparrow.displayFly();

    return 0;
}

/*
This program demonstrates hierarchical inheritance with the animal kingdom. The Animal class contains information about
the species of the animal.
The Mammal and Bird classes inherit from Animal and provide additional information specific to mammals and birds.

*/


