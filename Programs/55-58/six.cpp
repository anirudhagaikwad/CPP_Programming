/*
Implement a base class "Person" with two derived classes "Employee" and "Student."
Create another class "Graduate" derived from "Employee" and "Student."
Add a function "display()" to all classes, including "Graduate," to show their details.

Input:
Graduate graduate("John Doe", 12345, 98765)
Output:
Name: John Doe
Employee ID: 12345
Name: John Doe
Student ID: 98765

*/

#include <iostream>
#include <string>

// Base class Person
class Person {
protected:
    std::string name;

public:
    Person(const std::string& n) : name(n) {}

    void display() const {
        std::cout << "Name: " << name << std::endl;
    }
};

// Derived class Employee
class Employee : public Person {
protected:
    int employeeID;

public:
    Employee(const std::string& n, int id) : Person(n), employeeID(id) {}

    void display() const {
        Person::display();
        std::cout << "Employee ID: " << employeeID << std::endl;
    }
};

// Derived class Student
class Student : public Person {
protected:
    int studentID;

public:
    Student(const std::string& n, int id) : Person(n), studentID(id) {}

    void display() const {
        Person::display();
        std::cout << "Student ID: " << studentID << std::endl;
    }
};

// Derived class Graduate
class Graduate : public Employee, public Student,public Person {
public:
    Graduate(const std::string& n, int empID, int stuID)
        : Person(n), Employee(n, empID), Student(n, stuID) {}

    void display() const {
        Employee::display();
        Student::display();
    }
};

int main() {
    Graduate graduate("John Doe", 12345, 98765);
    graduate.display();

    return 0;
}

/*
This program demonstrates hybrid inheritance by creating a base class "Person" with two derived classes "Employee" and "Student."
A third class "Graduate" is derived from both "Employee" and "Student." Each class has its own data members and display function.
The "Graduate" class inherits the properties of both "Employee" and "Student" using multiple inheritance and overrides the display
function to display the details of an employee and a student.

*/

