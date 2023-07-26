/*
   Create a class 'Employee' with attributes 'name', 'employee_id', and 'salary'.
   Implement functions to set and display employee details.
   Use objects to set and display details of two employees.
*/

#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employee_id;
    double salary;

public:
    // Function to set employee details
    void setDetails(std::string n, int id, double sal) {
        name = n;
        employee_id = id;
        salary = sal;
    }

    // Function to display employee details
    void displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Employee ID: " << employee_id << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    Employee emp1, emp2;
    emp1.setDetails("John Doe", 1001, 50000.0);
    emp2.setDetails("Jane Smith", 1002, 60000.0);

    std::cout << "Employee 1 Details:\n";
    emp1.displayDetails();

    std::cout << "\nEmployee 2 Details:\n";
    emp2.displayDetails();

    return 0;
}

/*
This program defines a class Employee with attributes name, employee_id, and salary.
It has methods to set and display employee details.
The main function demonstrates how to create objects of the class and set/display employee details using these objects.
*/
