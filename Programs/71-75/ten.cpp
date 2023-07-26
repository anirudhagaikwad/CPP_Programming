/*
Create an abstract class Character with pure virtual functions attack() and defend().
Derive classes Warrior and Mage from Character and implement the attack() and defend() functions in each.
Use these classes to create a simple game character system.

Character* player1 = new Warrior;
player1->attack(); // Output: Warrior attacks with a sword
player1->defend(); // Output: Warrior defends with a shield

Character* player2 = new Mage;
player2->attack(); // Output: Mage attacks with a fireball
player2->defend(); // Output: Mage defends with a magic barrier

*/


#include <iostream>
using namespace std;

class Character {
public:
    // Pure virtual functions 'attack()' and 'defend()'.
    // These functions are meant to be implemented by derived classes to provide specific attack and defend actions for each character.
    virtual void attack() = 0;
    virtual void defend() = 0;
};

class Warrior : public Character {
public:
    // Override of the 'attack()' function for the 'Warrior' class.
    // Provides the specific attack implementation for warriors: "Warrior attacks with a sword."
    void attack() override {
        cout << "Warrior attacks with a sword." << endl;
    }

    // Override of the 'defend()' function for the 'Warrior' class.
    // Provides the specific defend implementation for warriors: "Warrior defends with a shield."
    void defend() override {
        cout << "Warrior defends with a shield." << endl;
    }
};

class Mage : public Character {
public:
    // Override of the 'attack()' function for the 'Mage' class.
    // Provides the specific attack implementation for mages: "Mage attacks with a fireball."
    void attack() override {
        cout << "Mage attacks with a fireball." << endl;
    }

    // Override of the 'defend()' function for the 'Mage' class.
    // Provides the specific defend implementation for mages: "Mage defends with a magic barrier."
    void defend() override {
        cout << "Mage defends with a magic barrier." << endl;
    }
};

int main() {
    // Creating objects of 'Warrior' and 'Mage' using base class pointers 'Character*'.
    Character* player1 = new Warrior;
    Character* player2 = new Mage;

    // Calling the 'attack()' and 'defend()' functions for each character using the base class pointers.
    // This demonstrates polymorphism, as the correct version of each function is called based on the actual object type at runtime.
    player1->attack(); // Warrior attacks with a sword
    player1->defend(); // Warrior defends with a shield

    player2->attack(); // Mage attacks with a fireball
    player2->defend(); // Mage defends with a magic barrier

    // Cleaning up the dynamically allocated objects.
    delete player1;
    delete player2;

    return 0;
}

/*
This C++ program demonstrates the use of abstract classes and polymorphism to create and handle different characters in a game.
The base class Character has two pure virtual functions attack() and defend(). These functions are meant to be implemented by derived
classes to provide specific attack and defend actions for each character.

Two derived classes, Warrior and Mage, inherit from the Character class. The Warrior class represents a warrior character and overrides
the attack() and defend() functions to provide the specific attack and defend implementations for warriors. The Mage class represents a
mage character and overrides the attack() and defend() functions to provide the specific attack and defend implementations for mages.

In the main() function, objects of Warrior and Mage are created using base class pointers Character*. This allows us to handle different
character types using a common base class interface.

The program calls the attack() and defend() functions for each character using the base class pointers player1 and player2.
This demonstrates polymorphism, as the correct version of each function is called based on the actual object type at runtime.
This behavior allows us to perform character-specific actions without knowing the exact type of the character at compile time.

*/


