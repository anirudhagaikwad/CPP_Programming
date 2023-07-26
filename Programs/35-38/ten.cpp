/*
   You work at a space research center where precise timing is crucial for coordinating space missions.
   The scientists and engineers often need to perform time calculations to synchronize mission events accurately.
   To help them with their tasks, you decide to create a class named 'Time' that will handle time-related addition.

   Input: t1(h=2, m=30, s=45)
          t2(h=1, m=45, s=15)
   Output: Time: 4h 16m 0s
*/

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Function to add time
    void addTime(const Time& other) {
        seconds += other.seconds;
        minutes += seconds / 60;
        seconds %= 60;

        minutes += other.minutes;
        hours += minutes / 60;
        minutes %= 60;

        hours += other.hours;
    }

    // Function to display time
    void displayTime() {
        std::cout << "Time: " << hours << "h " << minutes << "m " << seconds << "s\n";
    }
};

int main() {
    Time t1(5, 15, 60);
    Time t2(2, 45, 5);

    t1.addTime(t2);
    t1.displayTime();

    return 0;
}

/*
This program defines a class Time with attributes hours, minutes, and seconds.
It has a method to add time and display the resulting time.
The main function demonstrates how to use the addTime method with objects to add two time instances.
*/

