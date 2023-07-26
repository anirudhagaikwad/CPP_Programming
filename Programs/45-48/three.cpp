/*
 Create a class called "Person" with a copy constructor to initialize its attributes.
 Display the attributes of the original and copied objects.
*/

#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Parameterized Constructor
    Person(const std::string& n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor
    Person(const Person& other) {
        name = other.name;
        age = other.age;
    }

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person p1("Alice", 30);
    Person p2 = p1; // Using copy constructor
    p1.displayInfo();
    p2.displayInfo();
    return 0;
}

/*
This program defines a class Person with a parameterized constructor and a copy constructor.
The copy constructor allows us to create a new object p2 with the same attributes as p1.
We then display the attributes of both objects.
*/
