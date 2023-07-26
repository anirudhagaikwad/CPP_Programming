/*
Create a program that classifies animals into carnivores, herbivores, and omnivores using hybrid inheritance.

Omnivore omnivore("Bear");
omnivore.display();Species: Bear

*/

#include <iostream>
using namespace std;

class Animal {
protected:
    string species;

public:
    Animal(string sp) : species(sp) {}
    void display() {
        cout << "Species: " << species << endl;
    }
};

class Carnivore : virtual public Animal {
public:
    Carnivore(string sp) : Animal(sp) {}
};

class Herbivore : virtual public Animal {
public:
    Herbivore(string sp) : Animal(sp) {}
};

class Omnivore : public Carnivore, public Herbivore {
public:
    Omnivore(string sp) : Animal(sp), Carnivore(sp), Herbivore(sp) {}
};

int main() {
    Omnivore omnivore("Bear");
    omnivore.display();

    return 0;
}

/*
 This program classifies animals based on their dietary habits using hybrid inheritance.
 The Animal class represents common attributes like species. The Carnivore and Herbivore classes represent specific
 dietary habits.
 The Omnivore class inherits from both Carnivore and Herbivore classes.
*/
