/*

Implement a hierarchical inheritance system for educational institutions such as schools, colleges, and universities.
Each educational institution has common attributes like name, location, and establishment year, along with specific attributes
like the number of students and courses offered.

Input:
EducationalInstitution* institution1 = new School("ABC School", "City-A", 1990, 500);
institution1->displayInfo();
Output:
School Name: ABC School
Location: City-A
Establishment Year: 1990
Number of Students: 500

*/

#include <iostream>
#include <string>
using namespace std;

// Base class representing an Educational Institution
class EducationalInstitution {
protected:
    string name;
    string location;
    int establishmentYear;
public:
    EducationalInstitution(string _name, string _location, int _establishmentYear)
        : name(_name), location(_location), establishmentYear(_establishmentYear) {}
    virtual void displayInfo() const = 0;
};

// Derived class representing a School, inheriting from EducationalInstitution
class School : public EducationalInstitution {
private:
    int numStudents;
public:
    School(string _name, string _location, int _establishmentYear, int _numStudents)
        : EducationalInstitution(_name, _location, _establishmentYear), numStudents(_numStudents) {}

    // Implementing the virtual function to display specific information for Schools.
    void displayInfo() const override {
        cout << "School Name: " << name << "\nLocation: " << location
             << "\nEstablishment Year: " << establishmentYear
             << "\nNumber of Students: " << numStudents << endl;
    }
};

// Derived class representing a College, inheriting from EducationalInstitution
class College : public EducationalInstitution {
private:
    int numStudents;
    int numCourses;
public:
    College(string _name, string _location, int _establishmentYear, int _numStudents, int _numCourses)
        : EducationalInstitution(_name, _location, _establishmentYear), numStudents(_numStudents), numCourses(_numCourses) {}

    // Implementing the virtual function to display specific information for Colleges.
    void displayInfo() const override {
        cout << "College Name: " << name << "\nLocation: " << location
             << "\nEstablishment Year: " << establishmentYear
             << "\nNumber of Students: " << numStudents
             << "\nNumber of Courses Offered: " << numCourses << endl;
    }
};

// Derived class representing a University, inheriting from EducationalInstitution
class University : public EducationalInstitution {
private:
    int numStudents;
    int numDepartments;
public:
    University(string _name, string _location, int _establishmentYear, int _numStudents, int _numDepartments)
        : EducationalInstitution(_name, _location, _establishmentYear), numStudents(_numStudents), numDepartments(_numDepartments) {}

    // Implementing the virtual function to display specific information for Universities.
    void displayInfo() const override {
        cout << "University Name: " << name << "\nLocation: " << location
             << "\nEstablishment Year: " << establishmentYear
             << "\nNumber of Students: " << numStudents
             << "\nNumber of Departments: " << numDepartments << endl;
    }
};

int main() {
    // Creating objects of the derived classes through the base class pointer.
    EducationalInstitution* institution1 = new School("ABC School", "City-A", 1990, 500);
    EducationalInstitution* institution2 = new College("XYZ College", "City-B", 1985, 1200, 40);
    EducationalInstitution* institution3 = new University("PQR University", "City-C", 1950, 8000, 15);

    // Calling the displayInfo function, which will be dynamically dispatched based on the object's actual type.
    institution1->displayInfo();
    institution2->displayInfo();
    institution3->displayInfo();

    // Cleaning up the allocated memory.
    delete institution1;
    delete institution2;
    delete institution3;
    return 0;
}

/*
This program demonstrates hierarchical inheritance in an educational institution system. It defines a base class EducationalInstitution, which represents common attributes like name, location, and establishmentYear. The base class also declares a pure virtual function displayInfo(), making the class abstract to ensure it cannot be instantiated directly.

The program then defines three derived classes: School, College, and University, all inheriting from the EducationalInstitution class. Each of these classes overrides the displayInfo() function to provide specific information for Schools, Colleges, and Universities, respectively.

In the main() function, we create objects of the derived classes (School, College, and University) using the base class pointer (EducationalInstitution*). This demonstrates polymorphism as the displayInfo() function is called through the base class pointer, but it is dynamically dispatched to the appropriate function based on the actual type of the object.

When we call institution1->displayInfo(), it calls the displayInfo() function of the School class, displaying information specific to the school (Name, Location, Establishment Year, and Number of Students). Similarly, calling institution2->displayInfo() displays information specific to the college, and calling institution3->displayInfo() displays information specific to the university.

*/




