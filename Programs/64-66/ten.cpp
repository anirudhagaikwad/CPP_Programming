/*
Create a base class called Person, and derive two classes Student and Teacher from it.
Implement a virtual function introduce() in the Person class, which prints "I am a person."
Override the introduce() function in both Student and Teacher classes to print their roles and names.

Person* person1 = new Student("Alice");
person1->introduce(); // Output: I am a student named Alice.

Person* person2 = new Teacher("Mr. Smith");
person2->introduce(); // Output: I am a teacher named Mr. Smith.

*/

#include <iostream>
#include <string>

class Person {
public:
    // Virtual function to introduce a person
    virtual void introduce() const {
        std::cout << "I am a person." << std::endl;
    }
};

class Student : public Person {
private:
    std::string name;

public:
    Student(const std::string& n) : name(n) {}

    // Override the introduce() function for Student
    void introduce() const override {
        std::cout << "I am a student named " << name << "." << std::endl;
    }
};

class Teacher : public Person {
private:
    std::string name;

public:
    Teacher(const std::string& n) : name(n) {}

    // Override the introduce() function for Teacher
    void introduce() const override {
        std::cout << "I am a teacher named " << name << "." << std::endl;
    }
};

int main() {
    Person* person1 = new Student("Alice");
    Person* person2 = new Teacher("Mr. Smith");

    person1->introduce();
    person2->introduce();

    delete person1;
    delete person2;

    return 0;
}

/*
In this program, we have a base class Person with a virtual function introduce().
We create two derived classes, Student and Teacher, which override the introduce() function to introduce themselves with their
roles and names.
The main() function demonstrates how the overridden functions are called based on the actual type of the object at runtime.

*/

