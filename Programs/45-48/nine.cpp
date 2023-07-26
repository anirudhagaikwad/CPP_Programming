/*
 Create a class called "Student" with a constructor that uses an initialization list to set its attributes.
 Display the student's name and roll number.
*/

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;

public:
    // Constructor with initialization list
    Student(const std::string& n, int roll) : name(n), rollNumber(roll) {}

    void displayInfo() {
        std::cout << "Name: " << name << ", Roll Number: " << rollNumber << std::endl;
    }
};

int main() {
    Student s1("John Doe", 101);
    Student s2("Jane Smith", 102);
    s1.displayInfo();
    s2.displayInfo();
    return 0;
}

/*
This program defines a class Student with a constructor that uses an initialization list to set the name
and rollNumber attributes.
The displayInfo() method displays the student's name and roll number.
*/


