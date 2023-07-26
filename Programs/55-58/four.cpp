/*
Implement a base class "Person" with two derived classes "Employee" and "Student."
Create another class "Faculty" that is derived from both "Employee" and "Student."
Display the details of a faculty member, including their name, employee ID, and student ID.


Input:
Faculty faculty("John Doe", 12345, 98765)
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

// Derived class Faculty
class Faculty : public Employee, public Student {
public:
    Faculty(const std::string& n, int empID, int stuID)
        : Employee(n, empID), Student(n, stuID) {}

    void display() const {
        Employee::display();
        Student::display();
    }
};

int main() {
    Faculty faculty("John Doe", 12345, 98765);
    faculty.display();

    return 0;
}

/*
This program demonstrates multiple inheritance by creating a base class "Person" with two derived classes "Employee" and "Student."
A third class "Faculty" is derived from both "Employee" and "Student." The "Faculty" class inherits the data members and functions from
both the base classes and overrides the display function to display the name, employee ID, and student ID.

*/

