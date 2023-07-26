/*
Imagine you are a software developer working on a project called "The Romantic Date Planner."
The application aims to assist couples in planning and organizing memorable dates. As part of the project, you need to create a
class that represents a date, allowing users to compare different dates easily.

Your task is to develop a C++ class called "Date" that will be the cornerstone of the Romantic Date Planner application.
The "Date" class should have the ability to compare two dates using the '==' and '!=' operators.
The application will use these operators to determine whether two dates are the same or different, respectively.

Input:  d1(15, 7, 2023)
        d2(15, 7, 2023)
Output: d1 and d2 are the same dates.

Input:  d1(15, 7, 2023)
        d2(5, 4, 2021)
Output: d1 and d2 are different dates.



*/

#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Overloading the equality '==' operator
    bool operator==(const Date& other) {
        return day == other.day && month == other.month && year == other.year;
    }

    // Overloading the inequality '!=' operator
    bool operator!=(const Date& other) {
        return !(*this == other);
    }

    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d1(15, 7, 2023);
    Date d2(15, 7, 2023);
    Date d3(1, 1, 2023);

    if (d1 == d2) {
        cout << "d1 and d2 are the same dates." << endl;
    } else {
        cout << "d1 and d2 are different dates." << endl;
    }

    if (d1 != d3) {
        cout << "d1 and d3 are different dates." << endl;
    } else {
        cout << "d1 and d3 are the same dates." << endl;
    }

    return 0;
}

/*
This program creates a class Date to represent a date. The '==' and '!=' operators are overloaded
to compare two dates for equality and inequality.
The display() function is used to print the comparison results.

*/

