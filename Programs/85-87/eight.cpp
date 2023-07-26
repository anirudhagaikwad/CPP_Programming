/*

Create a class Person with attributes name and age. You are tasked to perform exception handling in class constructors if age is not in range 1-120.

Input:  Person person("Alice", 150);
Output: Error: Invalid age value!

Input:  Person person("Alice", 100);
Output: Name: Alice, Age: 100

Input:  Person person("Alice", -50);
Output: Error: Invalid age value!

*/


#include <iostream>
#include <string>

// Class representing a Person with a name and age
class Person {
private:
    std::string name;
    int age;

public:
    // Constructor to initialize a Person with a name and age
    Person(const std::string& n, int a) : name(n) {
        if (a < 0 || a > 120) {
            // Check if the age value is within the valid range (0 to 120)
            // If the age is invalid, throw a runtime_error with an error message
            throw std::runtime_error("Invalid age value!");
        }
        age = a;
    }

    // Function to display the name and age of the Person
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    try {
        // Try to create a Person object with name "Alice" and age 150
        // This should throw an "Invalid age value!" exception
        Person person("Alice", 150);
        person.display(); // This line will not be executed due to the exception
    }
    catch (const std::exception& ex) {
        // Catch any exception that derives from std::exception (including std::runtime_error)
        // Print the error message associated with the caught exception
        std::cout << "Error: " << ex.what() << std::endl;
    }

    return 0;
}

/*
The provided C++ program demonstrates the use of exception handling to handle an invalid age value when creating a Person object. The Person class represents an individual with a name and an age.

The Person class has a constructor that takes a const std::string& n (name) and an int a (age) as parameters. Inside the constructor, there is a check to ensure that the age value is within the valid range of 0 to 120. If the provided age is not within this range, the constructor throws a std::runtime_error exception with the error message "Invalid age value!".

In the main function, we attempt to create a Person object named person with the name "Alice" and the age 150. Since the age 150 is outside the valid range, the constructor of the Person class throws a std::runtime_error exception.

To handle the exception, we use a try-catch block. The code within the try block attempts to create the person object, but it encounters an exception. The catch block (catch (const std::exception& ex)) catches the exception and stores it in the ex variable, which is of type const std::exception&.

In the catch block, we then display an error message using std::cout. The ex.what() function returns the error message associated with the caught exception, which, in this case, is "Invalid age value!".

*/

