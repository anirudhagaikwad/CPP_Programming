/*
Imagine you are a teacher at a school, and you need to calculate the average grade of a student based on their exam scores.
You want to create a C++ program to handle this task. Each student has multiple subjects, and the average grade will be calculated
as the sum of the grades divided by the total number of subjects.

Input: {80, 90, 85, 95, 70}
Output: Average grade of student: 84

*/

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int grades[5];
    int numGrades;
public:
    Student(const std::string& n, const int* gradesArray, int num) : name(n), numGrades(num) {
        for (int i = 0; i < numGrades; ++i) {
            grades[i] = gradesArray[i];
        }
    }

    friend double calculateAverageGrade(const Student& stu);
};

double calculateAverageGrade(const Student& stu) {
    if (stu.numGrades == 0) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < stu.numGrades; ++i) {
        sum += stu.grades[i];
    }

    return static_cast<double>(sum) / stu.numGrades;
}

int main() {
    const int gradesArray[] = {81, 92, 75, 85, 79};
    const Student stu1("Alice", gradesArray, 5);

    double averageGrade = calculateAverageGrade(stu1);

    std::cout << "Average grade of student: " << averageGrade << std::endl;

    return 0;
}


/*
The program defines a class Student with private data members name, grades (an array), and numGrades (number of grades).
It also declares a friend function calculateAverageGrade that calculates the average grade of a student.
The program then demonstrates how to use constant objects and friend functions to calculate the average grade.
*/
