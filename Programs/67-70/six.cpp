/*
Imagine you are working on a payroll management system for a company called "TechCorp."
The company has different types of employees, including Regular Employees and Contract Employees.
As part of the system, you need to create a C++ program to calculate the pay for each employee based on their employment type.

Input:
RegularEmployee(name="John Doe",id=1001,rate=20.0,hours=160)
Output:
Regular Employee Pay: $3520

Input:
ContractEmployee(name="Jane Smith", id=2001, rate=2000, hours=0,contractRate=500)
Output:
Contract Employee Pay: $500

*/

#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int empID;
    double hourlyRate;
    int hoursWorked;

public:
    Employee(const std::string& n, int id, double rate, int hours)
        : name(n), empID(id), hourlyRate(rate), hoursWorked(hours) {}

    virtual double calculatePay() {
        return hourlyRate * hoursWorked;
    }
};

class RegularEmployee : public Employee {
public:
    RegularEmployee(const std::string& n, int id, double rate, int hours)
        : Employee(n, id, rate, hours) {}

    double calculatePay() override {
        double basePay = Employee::calculatePay();
        return basePay + (basePay * 0.1); // 10% bonus for regular employees
    }
};

class ContractEmployee : public Employee {
private:
    double contractRate;
public:
    ContractEmployee(const std::string& n, int id, double rate, int hours, double conRate)
        : Employee(n, id, rate, hours), contractRate(conRate) {}

    double calculatePay() override {
        return contractRate;
    }
};

int main() {
    Employee* emp1 = new RegularEmployee("John Doe", 1001, 20.0, 160);
    Employee* emp2 = new ContractEmployee("Jane Smith", 2001, 2000, 0, 500);

    std::cout << "Regular Employee Pay: $" << emp1->calculatePay() << std::endl;
    std::cout << "Contract Employee Pay: $" << emp2->calculatePay() << std::endl;

    delete emp1;
    delete emp2;

    return 0;
}

/*
The program defines a base class Employee and two derived classes RegularEmployee and ContractEmployee.
The base class Employee has data members to store the employee's name, employee ID, hourly rate, and hours worked.
It also has a virtual function calculatePay() to calculate and return the pay for the employee based on the hourly rate
and hours worked.
The RegularEmployee class overrides the calculatePay() function to calculate the pay for regular employees, which includes a
10% bonus on the base pay. The ContractEmployee class overrides the calculatePay() function to return the contract rate as the
pay for contract employees. In the main() function, objects of RegularEmployee and ContractEmployee are created, and their
respective calculatePay() functions are called to display the calculated pay for each employee.

*/


