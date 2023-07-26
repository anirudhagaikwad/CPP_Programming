/*

Design a hierarchy of employees, including a base class for Employee and derived classes for Manager, Engineer, and Technician.
Each class should have specific attributes like designation and salary.

Input:
Employee* emp1 = new Manager("John Doe", 101, "Senior Manager", 80000);
emp1->displayDetails();
Output:
Name: John Doe
Employee ID: 101
Designation: Senior Manager
Salary: $80000

Input:
Employee* emp2 = new Engineer("Alice Smith", 202, "Software Engineer", 60000);
emp2->displayDetails();
Output:
Name: Alice Smith
Employee ID: 202
Designation: Software Engineer
Salary: $60000

Input:
Employee* emp3 = new Technician("Bob Johnson", 303, "Lab Technician", 40000);
emp3->displayDetails();
Output:
Name: Bob Johnson
Employee ID: 303
Designation: Lab Technician
Salary: $40000

*/

#include <iostream>
#include <string>
using namespace std;

// Base class Employee
class Employee {
protected:
    string name;
    int employeeID;
public:
    Employee(string _name, int _employeeID) : name(_name), employeeID(_employeeID) {}
    virtual void displayDetails() const = 0;
};

// Derived class Manager from Employee
class Manager : public Employee {
private:
    string designation;
    double salary;
public:
    Manager(string _name, int _employeeID, string _designation, double _salary)
        : Employee(_name, _employeeID), designation(_designation), salary(_salary) {}

    // Override the base class function to display Manager's details
    void displayDetails() const override {
        cout << "Name: " << name << "\nEmployee ID: " << employeeID
             << "\nDesignation: " << designation << "\nSalary: $" << salary << endl;
    }
};

// Derived class Engineer from Employee
class Engineer : public Employee {
private:
    string designation;
    double salary;
public:
    Engineer(string _name, int _employeeID, string _designation, double _salary)
        : Employee(_name, _employeeID), designation(_designation), salary(_salary) {}

    // Override the base class function to display Engineer's details
    void displayDetails() const override {
        cout << "Name: " << name << "\nEmployee ID: " << employeeID
             << "\nDesignation: " << designation << "\nSalary: $" << salary << endl;
    }
};

// Derived class Technician from Employee
class Technician : public Employee {
private:
    string designation;
    double salary;
public:
    Technician(string _name, int _employeeID, string _designation, double _salary)
        : Employee(_name, _employeeID), designation(_designation), salary(_salary) {}

    // Override the base class function to display Technician's details
    void displayDetails() const override {
        cout << "Name: " << name << "\nEmployee ID: " << employeeID
             << "\nDesignation: " << designation << "\nSalary: $" << salary << endl;
    }
};

int main() {
    // Create instances of derived classes and assign them to base class pointers
    Employee* emp1 = new Manager("John Doe", 101, "Senior Manager", 80000);
    Employee* emp2 = new Engineer("Alice Smith", 202, "Software Engineer", 60000);
    Employee* emp3 = new Technician("Bob Johnson", 303, "Lab Technician", 40000);

    // Display details of each employee using the base class pointer
    emp1->displayDetails();
    emp2->displayDetails();
    emp3->displayDetails();

    // Free the memory allocated for each employee
    delete emp1;
    delete emp2;
    delete emp3;
    return 0;
}

/*
The code defines a simple employee hierarchy using inheritance in C++. There is a base class Employee, and three derived classes Manager, Engineer, and Technician.
Each derived class represents a specific type of employee and contains additional member variables (designation and salary) that are specific to that type.
The Employee base class has a pure virtual function displayDetails(), making it an abstract class. This function is meant to be overridden by the derived classes, ensuring that each derived class provides its implementation for displaying details.
In the main() function, instances of the derived classes are created and assigned to base class pointers (emp1, emp2, and emp3). This is an example of polymorphism, where a base class pointer can point to objects of its derived classes.
The displayDetails() function is called for each employee using the base class pointer. Due to dynamic dispatch (runtime polymorphism), the correct version of displayDetails() from the respective derived class is called, allowing us to display the details of each employee type properly.
Finally, memory allocated for each employee is freed using delete to prevent memory leaks.

*/
