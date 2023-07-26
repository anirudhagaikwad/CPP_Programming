/*
Create a game development framework with a virtual base class GameObject and derived class Character.
Implement a virtual function update() in the GameObject class, and override it in the Character class to update the
character's position and other attributes.

 GameObject* obj1 = new GameObject(5, 5);
 obj1->update(); // Output: Updating GameObject: (5, 5)

 Character* char1 = new Character(10, 10, 100);
 char1->update(); // Output: Updating Character: (11, 11), Health: 110

*/

#include <iostream>
using namespace std;

// Base class representing a GameObject
class GameObject {
protected:
    int posX;
    int posY;
public:
    GameObject(int x, int y) : posX(x), posY(y) {}

    // Virtual function to update the GameObject's position
    virtual void update() {
        // Base implementation, just print the position
        cout << "Updating GameObject: (" << posX << ", " << posY << ")" << endl;
    }
};

// Derived class representing a Character, inheriting from GameObject
class Character : public GameObject {
private:
    int health;
public:
    Character(int x, int y, int _health) : GameObject(x, y), health(_health) {}

    // Override the update function to update the Character's position and health
    void update() override {
        // Simulate movement, increase health, or other character-specific updates
        posX += 1;
        posY += 1;
        health += 10;
        cout << "Updating Character: (" << posX << ", " << posY << "), Health: " << health << endl;
    }
};

int main() {
    GameObject* obj1 = new GameObject(5, 5);
    Character* char1 = new Character(10, 10, 100);

    // Calling the update function on both GameObject and Character objects
    cout << "Before Update:\n";
    obj1->update();  // Calls the base class implementation
    char1->update(); // Calls the overridden function in Character

    // Clean up the allocated memory
    delete obj1;
    delete char1;

    return 0;
}

/*
This program demonstrates a basic game development framework using C++. The framework includes a virtual base class GameObject and a derived class Character. The GameObject class represents a generic game object with attributes posX and posY, representing the position of the object on the screen. It also has a virtual function update() to update the game object.

The Character class represents a character in the game, inheriting from the GameObject class. It adds an additional attribute health, representing the character's health points. The Character class overrides the update() function to update the character's position and health.

In the main() function, we create objects of both GameObject and Character using base class pointers (GameObject* and Character*). When we call the update() function on these objects, it dynamically dispatches the appropriate method based on the actual type of the object. This demonstrates polymorphism, as the base class pointer can point to objects of its derived classes and call the appropriate method.

In the example, we update both a generic game object (the GameObject object) and a character (the Character object). The update() function in the GameObject class just prints the position of the game object, whereas the update() function in the Character class updates the character's position and health, demonstrating the character-specific behavior.
*/

