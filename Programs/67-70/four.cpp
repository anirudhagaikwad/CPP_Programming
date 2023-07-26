/*

In a renowned software development company, the HR department is responsible for calculating and allocating bonuses to their employees based on
their job roles and performance. To streamline the process, they have decided to develop a program that automates the bonus calculation for
each employee. The program will have a base class called Employee, representing the common attributes and functionalities of all employees.
Two derived classes, Manager and Developer, will be created to represent specific employee roles.


Input: Manager("John Doe", 5000)
Output: Manager bonus: 1000

Input: Developer("Jane Smith", 4000)
Output: Developer bonus: 400

*/


#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    double salary;
public:
    Employee(const std::string& n, double s) : name(n), salary(s) {}

    virtual void calculateBonus() {
        std::cout << "No bonus calculated for generic employee." << std::endl;
    }
};

class Manager : public Employee {
public:
    Manager(const std::string& n, double s) : Employee(n, s) {}

    void calculateBonus() override {
        std::cout << "Manager bonus: " << salary * 0.2 << std::endl;
    }
};

class Developer : public Employee {
public:
    Developer(const std::string& n, double s) : Employee(n, s) {}

    void calculateBonus() override {
        std::cout << "Developer bonus: " << salary * 0.1 << std::endl;
    }
};

int main() {
    Employee* employee1 = new Manager("John Doe", 5000);
    Employee* employee2 = new Developer("Jane Smith", 4000);

    employee1->calculateBonus();
    employee2->calculateBonus();

    delete employee1;
    delete employee2;

    return 0;
}


/*
The program defines a base class Employee and two derived classes Manager and Developer.
The base class Employee has a virtual function calculateBonus() which is meant to be overridden by derived classes.
The Manager and Developer classes override the calculateBonus() function to calculate and display the bonus amount for a
manager and a developer, respectively. In the main() function, objects of Manager and Developer are created and their respective
calculateBonus() functions are called to display the calculated bonus amounts.

*/


