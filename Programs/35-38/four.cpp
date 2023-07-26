/*
Create a class Time with attributes hours, minutes, and seconds. Implement a method to convert time to seconds.
*/

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    int convertToSeconds() {
        return hours * 3600 + minutes * 60 + seconds;
    }
};

int main() {
    Time t(2, 30, 45);
    std::cout << "Time in seconds: " << t.convertToSeconds() << std::endl;
    return 0;
}

/*
This program creates a class Time to represent time with hours, minutes, and seconds.
The method convertToSeconds() converts the time to seconds.
*/
