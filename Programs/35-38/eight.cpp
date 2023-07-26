/*
Write a program to store and display the details of a student using a class named Student.
The class should have three private data members, name, rollNo, and age, and two member functions, setDetails() to set the details of the student,
and displayDetails() to display the details.
*/

#include<iostream>
#include<string>
using namespace std;

class Student {
    string name;
    int rollNo;
    int age;
public:
    void setDetails(string n, int r, int a) {
        name = n;
        rollNo = r;
        age = a;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;
    s.setDetails("John Doe", 101, 18);
    s.displayDetails();
    return 0;
}


/*
This program demonstrates the use of a class to store and display the details of a student.
The setDetails() function is used to set the name, roll number, and age of the student, and the displayDetails() function is used to display the details.
The program creates an instance of the Student class, sets the details, and then displays them.
*/
