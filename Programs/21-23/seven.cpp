/*
Emma is a computer science teacher at a high school.
She wants to develop a C++ program that calculates the grade for her students based on the percentage and marks they obtained in their exams.
Emma has decided to use method overloading to implement the grading system. Write a cpp program to help Emma.

Example:

Enter the percentage marks: 92
Grade: A+
Enter the marks obtained and maximum marks: 600 700
Grade: A

*/

#include<iostream>
#include<string>

// Calculate grade based on percentage marks
std::string calculateGrade(float percentage)
{
    std::string grade;

    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80)
        grade = "A";
    else if (percentage >= 70)
        grade = "B";
    else if (percentage >= 60)
        grade = "C";
    else if (percentage >= 50)
        grade = "D";
    else
        grade = "F";

    return grade;
}

// Calculate grade based on marks obtained and maximum marks
std::string calculateGrade(float marksObtained, float maxMarks)
{
    float percentage = (marksObtained / maxMarks) * 100;
    return calculateGrade(percentage);
}


int main()
{

    float marksObtained, maxMarks;

    // Percentage marks
    std::cout << "Enter the percentage marks: ";
    std::cin >> marksObtained;
    std::cout << "Grade: " << calculateGrade(marksObtained) << std::endl;

    // Marks obtained and maximum marks
    std::cout << "Enter the marks obtained and maximum marks: ";
    std::cin >> marksObtained >> maxMarks;
    std::cout << "Grade: " << calculateGrade(marksObtained, maxMarks) << std::endl;

    return 0;
}

/*
above program calculates the grade of student based on both the percentage and marks obtained by student.
*/

