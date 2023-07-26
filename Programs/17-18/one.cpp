/*
In a small town called Leapville, the townspeople want to celebrate special occasions with the most accurate calendar system possible.
They believe that every four years, an extra day should be added to the calendar to keep it synchronized with the solar year.
This special year, called a "leap year," consists of 366 days instead of the usual 365 days.

You, the town's brilliant programmer, are assigned the task of creating a program to check whether a given year is a leap year or not. The program will help the townspeople determine if they need to add an extra day to their calendar.

 Input: Enter a year: 2020
 Output: 2020 is a leap year.

*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

/*
This program checks if a given year is a leap year or not, based on the leap year rules.
*/
