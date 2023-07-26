/*
Create a class "Distance" that represents a distance in feet and inches.
Implement a constructor to convert feet to inches. Display the converted distance.
*/

#include <iostream>

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor to convert feet to inches
    Distance(int ft) {
        feet = ft;
        inches = ft * 12;
    }

    void displayDistance() {
        std::cout << "Feet: " << feet << ", Inches: " << inches << std::endl;
    }
};

int main() {
    Distance d(5);
    d.displayDistance();
    return 0;
}

/*
This program defines a class Distance that represents a distance in feet and inches.
The constructor takes ft as an argument and converts it to inches.
The displayDistance() method then displays the original feet value and the corresponding inches.
*/
