/*
You are working on a student record management system for a school,
and you need to create a C++ program to compare the age of two students and find the older student based on their ages.

Input:
student1=("Alice", 21)
student2=("Bob", 23)

Output:
Older Student: Bob, Age: 23

*/

#include <iostream> // Include the standard input/output stream library
#include <string>   // Include the string library for working with strings

// Class: Student
class Student {
public:
    std::string name; // Public data member to store the name of the student
    int age;         // Public data member to store the age of the student

    // Constructor to initialize the name and age of the student
    Student(const std::string& n, int a) : name(n), age(a) {}
};

// Function to find the older student and return a new Student
Student findOlderStudent(const Student& s1, const Student& s2) {
    // Compare the ages of the two students
    if (s1.age >= s2.age) {
        // If the age of student 1 is greater or equal, create a new Student object with their details
        return Student(s1.name, s1.age);
    } else {
        // If the age of student 2 is greater, create a new Student object with their details
        return Student(s2.name, s2.age);
    }
}

int main() {
    // Create two Student objects representing two students
    Student student1("Alice", 21);
    Student student2("Bob", 23);

    // Call the findOlderStudent() function with the two Student objects and store the result
    Student olderStudent = findOlderStudent(student1, student2);

    // Display the name and age of the older student on the console
    std::cout << "Older Student: " << olderStudent.name << ", Age: " << olderStudent.age << std::endl;

    return 0;
}

/*
This C++ program creates a Student class and implements a function to find the older student based on their ages. The program compares the ages of two students and returns a new Student object representing the older student.

The Student class represents individual students and has two public data members: name to store the name of the student (as a string) and age to store the age of the student (as an integer). The constructor of the Student class is used to initialize the name and age of each student when a new object is created.

The findOlderStudent() function takes two constant references to Student objects, s1 and s2, as parameters. The function compares the ages of the two students and returns a new Student object representing the older student. If both students have the same age, the function returns any one of them as the older student.

In the main() function, two Student objects (student1 and student2) are created, representing two students with their respective names and ages. The findOlderStudent() function is called with these two objects as arguments, and the returned Student object is stored in the olderStudent variable.

Finally, the program displays the name and age of the older student (olderStudent) on the console using std::cout.
*/


