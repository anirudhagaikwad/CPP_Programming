/* In a virtual reality world, there are various types of creatures with unique abilities.
Some creatures can fly, while others can swim. Additionally, some creatures have both abilities.
Your task is to model these creatures using classes with appropriate functionalities.

*/

#include <iostream>
using namespace std;

// Animal class (base class)
class Animal {
public:
    // A pure virtual function to make Animal an abstract class.
    // Every derived class must override this function to provide its own behavior.
    virtual void display() const = 0;
};

// FlyingCreature class (derived class from Animal)
class FlyingCreature : virtual public Animal {
public:
    void display() const override {
        cout << "This creature can fly!" << endl;
    }
};

// SwimmingCreature class (derived class from Animal)
class SwimmingCreature : virtual public Animal {
public:
    void display() const override {
        cout << "This creature can swim!" << endl;
    }
};

// FlyingSwimmingCreature class (derived class from both FlyingCreature and SwimmingCreature)
class FlyingSwimmingCreature : public FlyingCreature, public SwimmingCreature {
public:
    // Since both FlyingCreature and SwimmingCreature have a display() method, we need to specify which one to use.
    // We do this by explicitly calling the method from the desired class.
    void display() const override {
        FlyingCreature::display();
        SwimmingCreature::display();
    }
};

int main() {
    // Problem scenario: We have different creatures, and we want to display their abilities.

    // Create instances of different creatures
    FlyingCreature flyingCreature;
    SwimmingCreature swimmingCreature;
    FlyingSwimmingCreature flyingSwimmingCreature;

    // Display abilities of each creature
    cout << "Creature 1: ";
    flyingCreature.display();

    cout << "Creature 2: ";
    swimmingCreature.display();

    cout << "Creature 3: ";
    flyingSwimmingCreature.display();

    return 0;
}

/*
We'll create three classes: Animal (base class), FlyingCreature, and SwimmingCreature (derived classes).
The FlyingCreature and SwimmingCreature classes will be derived from the Animal class.
Additionally, we'll create a hybrid creature called FlyingSwimmingCreature that inherits from both FlyingCreature and SwimmingCreature.
*/
