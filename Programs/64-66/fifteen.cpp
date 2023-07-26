/*
Create a hierarchy of game characters with a base class Character and derived classes Warrior, Mage, and Archer.
Implement a method specialAbility() in the base class and override it in the derived classes to display the special ability of
each character type.

Input:
Character* warrior = new Warrior("Aragorn");
warrior->specialAbility();
Output:
Aragorn is a Warrior. Special Ability: Devastating Sword Strike!

Input:
Character* mage = new Mage("Gandalf");
mage->specialAbility();
Output:
Gandalf is a Mage. Special Ability: Fireball Attack!

Input:
Character* archer = new Archer("Legolas");
archer->specialAbility();
Output:
Legolas is an Archer. Special Ability: Precise Arrow Shot!

*/

#include <iostream>
#include <string>
using namespace std;

// Base class Character
class Character {
protected:
    string name;
public:
    Character(string _name) : name(_name) {}
    virtual void specialAbility() const = 0;
};

// Derived class Warrior from Character
class Warrior : public Character {
public:
    Warrior(string _name) : Character(_name) {}

    // Override the base class function to display Warrior's special ability
    void specialAbility() const override {
        cout << name << " is a Warrior. Special Ability: Devastating Sword Strike!" << endl;
    }
};

// Derived class Mage from Character
class Mage : public Character {
public:
    Mage(string _name) : Character(_name) {}

    // Override the base class function to display Mage's special ability
    void specialAbility() const override {
        cout << name << " is a Mage. Special Ability: Fireball Attack!" << endl;
    }
};

// Derived class Archer from Character
class Archer : public Character {
public:
    Archer(string _name) : Character(_name) {}

    // Override the base class function to display Archer's special ability
    void specialAbility() const override {
        cout << name << " is an Archer. Special Ability: Precise Arrow Shot!" << endl;
    }
};

int main() {
    // Create instances of derived classes
    Character* warrior = new Warrior("Aragorn");
    Character* mage = new Mage("Gandalf");
    Character* archer = new Archer("Legolas");

    // Call specialAbility() for each character
    warrior->specialAbility();
    mage->specialAbility();
    archer->specialAbility();

    // Free the memory allocated for each character
    delete warrior;
    delete mage;
    delete archer;

    return 0;
}

/*
In this program, we define a base class Character with a pure virtual method specialAbility().
The derived classes Warrior, Mage, and Archer inherit from the Character class and override the specialAbility() method to
display their respective special abilities.

In the main() function, we create instances of each derived class, representing characters in the game (Aragorn, Gandalf, and Legolas).
We then call the specialAbility() method for each character using the base class pointer. Since specialAbility() is a virtual function,
the appropriate version of the method is called based on the actual type of the object, allowing us to display the unique special ability of each character type.
Finally, we free the memory allocated for each character to prevent memory leaks.

*/


