/*
Create a class "Date" with multiple constructors, including one that delegates to another constructor.
Display the date in different formats.
*/

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Default Constructor
    Date() : Date(1, 1, 1970) {}

    // Constructor with day, month, and year
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void displayDate() {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    Date date1; // Default constructor
    Date date2(15, 7, 2023); // Parameterized constructor
    date1.displayDate();
    date2.displayDate();
    return 0;
}

/*
This program defines a class Date with multiple constructors.
The default constructor delegates to another constructor by using the member initialization list.
The displayDate() method displays the date in the format day/month/year.
*/

