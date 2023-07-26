/*
Create a base class "Animal" and two derived classes "Mammal" and "Bird."
Implement a class "Bat" that inherits from both "Mammal" and "Bird," and demonstrate function
overriding with virtual base classes.

*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() const {
        cout << "Animal makes a sound." << endl;
    }
};

class Mammal : virtual public Animal {
public:
    void sound() {
        cout << "Mammal makes a sound." << endl;
    }
};

class Bird : virtual public Animal {
public:
    void sound() {
        cout << "Bird makes a sound." << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void sound() {
        cout << "Bat makes a sound." << endl;
    }
};

int main() {
    Bat bat;
    bat.sound();

    return 0;
}
