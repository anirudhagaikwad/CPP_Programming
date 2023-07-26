/*
Create a base class "Person" with two derived classes "Student" and "Employee."
Implement functions to display details of students and employees by use of multiple inheritance.

Student student("John Doe", 12345)
student.displayDetails() // Name: John Doe, Roll Number: 12345

Employee employee("Jane Smith", "E789")
employee.displayDetails() // Name: Jane Smith, Employee ID: E789

*/

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {}
};

class Student : public Person {
private:
    int rollNumber;

public:
    Student(string n, int roll) : Person(n), rollNumber(roll) {}

    void displayDetails() const {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

class Employee : public Person {
private:
    string empId;

public:
    Employee(string n, string id) : Person(n), empId(id) {}

    void displayDetails() const {
        cout << "Name: " << name << ", Employee ID: " << empId << endl;
    }
};

int main() {
    Student student("John Doe", 12345);
    Employee employee("Jane Smith", "E789");

    student.displayDetails();
    employee.displayDetails();

    return 0;
}
