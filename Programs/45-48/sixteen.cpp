/*
Create a class "Employee" with a parameterized constructor to set the employee ID and name.
Create an array of employees and display their details.
*/

#include <iostream>
#include <string>

class Employee {
private:
    int empId;
    std::string empName;

public:
    // Parameterized Constructor
    Employee(int id, const std::string& name) : empId(id), empName(name) {}

    void displayDetails() {
        std::cout << "Employee ID: " << empId << ", Employee Name: " << empName << std::endl;
    }
};

int main() {
    Employee employees[] = { Employee(101, "John Doe"), Employee(102, "Jane Smith") };
    for (const auto& emp : employees) {
        emp.displayDetails();
    }
    return 0;
}

/*
This program defines a class Employee with a parameterized constructor to set the empId and empName attributes.
We then create an array of Employee objects and display their details using a loop.

*/

