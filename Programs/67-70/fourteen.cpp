/*
Create a virtual base class Animal with pure virtual functions displayInfo() and makeSound().
Implement derived classes Lion, Elephant, and Giraffe that inherit from Animal.
In a zoo management system, use these classes to display information and make sounds of different animals.

Input:
Lion lion("Simba");
animal->displayInfo();
animal->makeSound();

Output:
Name: Simba
Species: Lion
The lion roars!

*/

#include <iostream>
#include <string>
using namespace std;

// Base class representing an Animal
class Animal {
protected:
    string name;
    string species;
public:
    // Constructor for the Animal class
    Animal(string _name, string _species) : name(_name), species(_species) {}

    // Pure virtual function to display information about the animal
    virtual void displayInfo() const = 0;

    // Pure virtual function to make sound of the animal
    virtual void makeSound() const = 0;
};

// Derived class representing a Lion, inheriting from Animal
class Lion : public Animal {
public:
    // Constructor for the Lion class, which also calls the constructor of the base class (Animal)
    Lion(string _name) : Animal(_name, "Lion") {}

    // Implementing the displayInfo method to display information about the lion
    void displayInfo() const override {
        cout << "Name: " << name << "\nSpecies: " << species << endl;
    }

    // Implementing the makeSound method to make a lion sound
    void makeSound() const override {
        cout << "The lion roars!" << endl;
    }
};

// Derived class representing an Elephant, inheriting from Animal
class Elephant : public Animal {
public:
    // Constructor for the Elephant class, which also calls the constructor of the base class (Animal)
    Elephant(string _name) : Animal(_name, "Elephant") {}

    // Implementing the displayInfo method to display information about the elephant
    void displayInfo() const override {
        cout << "Name: " << name << "\nSpecies: " << species << endl;
    }

    // Implementing the makeSound method to make an elephant sound
    void makeSound() const override {
        cout << "The elephant trumpets!" << endl;
    }
};

// Derived class representing a Giraffe, inheriting from Animal
class Giraffe : public Animal {
public:
    // Constructor for the Giraffe class, which also calls the constructor of the base class (Animal)
    Giraffe(string _name) : Animal(_name, "Giraffe") {}

    // Implementing the displayInfo method to display information about the giraffe
    void displayInfo() const override {
        cout << "Name: " << name << "\nSpecies: " << species << endl;
    }

    // Implementing the makeSound method to make a giraffe sound
    void makeSound() const override {
        cout << "The giraffe bleats!" << endl;
    }
};

int main() {
    // Creating objects of the derived classes (Lion, Elephant, and Giraffe)
    Lion lion("Simba");
    Elephant elephant("Dumbo");
    Giraffe giraffe("Melman");

    // Displaying information and making sounds of different animals using the base class pointer (Animal*)
    Animal* animals[] = {&lion, &elephant, &giraffe};

    for (const auto animal : animals) {
        animal->displayInfo();
        animal->makeSound();
        cout << endl;
    }

    return 0;
}

/*
This program implements a "Zoo Management System" using the virtual base class Animal and its derived classes Lion, Elephant, and Giraffe. The base class Animal has two pure virtual functions: displayInfo() to display information about the animal and makeSound() to make the sound of the animal. The derived classes (Lion, Elephant, and Giraffe) inherit from the Animal class and override these pure virtual functions to provide their specific implementation.

In the main() function, we create objects of the derived classes (Lion, Elephant, and Giraffe). We use an array of base class pointers (Animal*) to store pointers to these objects. The base class pointers allow us to treat objects of derived classes polymorphically, enabling us to call the appropriate virtual functions based on the actual type of the object at runtime.

The program then iterates over the array of base class pointers and calls the displayInfo() and makeSound() methods for each animal, displaying their information and making their respective sounds. This demonstrates the dynamic dispatch of virtual functions, ensuring that the correct functions are called for each derived class object based on their actual type.

The output of the program will display the information and sounds of different animals, showcasing the functionality of the "Zoo Management System."
*/
