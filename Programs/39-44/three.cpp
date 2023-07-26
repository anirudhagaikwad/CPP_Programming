/*
 Create a class representing a student. The class should have private data members for the student's name, roll number, and GPA.
 Implement methods to set and get the student's details using public member functions.
*/

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    double gpa;

public:
    void setName(const std::string& newName);
    void setRollNumber(int newRollNumber);
    void setGPA(double newGPA);
    std::string getName() const;
    int getRollNumber() const;
    double getGPA() const;
};

void Student::setName(const std::string& newName) {
    name = newName;
}

void Student::setRollNumber(int newRollNumber) {
    rollNumber = newRollNumber;
}

void Student::setGPA(double newGPA) {
    gpa = newGPA;
}

std::string Student::getName() const {
    return name;
}

int Student::getRollNumber() const {
    return rollNumber;
}

double Student::getGPA() const {
    return gpa;
}

int main() {
    Student student1;
    student1.setName("John Doe");
    student1.setRollNumber(12345);
    student1.setGPA(3.8);

    std::cout << "Name: " << student1.getName() << std::endl;
    std::cout << "Roll Number: " << student1.getRollNumber() << std::endl;
    std::cout << "GPA: " << student1.getGPA() << std::endl;

    return 0;
}

/*
This program showcases a simple Student class with private members (name, rollNumber, and gpa)
and public member functions (setters and getters).
Users can set and retrieve student details using these public member functions.
*/
