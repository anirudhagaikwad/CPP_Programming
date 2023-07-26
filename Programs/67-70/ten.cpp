/*
 Write a program in which we have four classes: Person, Student, Employee, and Manager. Both Student and Employee inherit virtually from Person.
 The Manager class is derived from both Student and Employee. Without using a virtual base class, the Manager class would face the diamond problem,
 as there would be two copies of the Person class in the inheritance hierarchy. By making Person a virtual base class, we resolve the diamond problem,
 and the manager.display() function correctly calls the Student and Employee versions of display().

 Input:
    manager(1001, 3.8, 5000);
    manager.display()
 Output: Manager ID: 1001, GPA: 3.8, Salary: 5000

*/


#include <iostream>
using namespace std;

class Person {
public:
    Person(int id) : id(id) {}
    virtual void display() {
        cout << "Person ID: " << id << endl;
    }
    int getId(){
        return id;
    }

private:
    int id;
};

class Student : virtual public Person {
public:
    Student(int id, float gpa) : Person(id), gpa(gpa) {}
    void display() override {
        cout << "Student ID: " << Person::getId() << ", GPA: " << gpa << endl;
    }

     float getGPA(){
        return gpa;
    }

private:
    float gpa;
};

class Employee : virtual public Person {
public:
    Employee(int id, float salary) : Person(id), salary(salary) {}
    void display() override {
        cout << "Employee ID: " << Person::getId() << ", Salary: " << salary << endl;
    }
     int getSalary(){
        return salary;
    }

private:
    float salary;
};

class Manager : public Student, public Employee {
public:
    Manager(int id, float gpa, float salary) : Person(id), Student(id, gpa), Employee(id, salary) {}
    void display() override {
        cout << "Manager ID: " << Person::getId() << ", GPA: " << Student::getGPA() << ", Salary: " << Employee::getSalary() << endl;
    }
};

int main() {
    Manager manager(1001, 3.8, 5000);
    manager.display(); // Resolves the diamond problem using virtual base class
    return 0;
}

/*

This program demonstrates the diamond inheritance problem and how using a virtual base class solves it.

*/



