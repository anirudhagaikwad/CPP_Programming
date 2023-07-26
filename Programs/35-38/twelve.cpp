/*
   Create a class 'Distance' with attributes 'feet' and 'inches'.
   Implement functions to add two distances and display the result in feet-inches format.
   Use objects to demonstrate distance addition.
*/

#include <iostream>

class Distance {
private:
    int feet;
    double inches;

public:
    // Constructor
    Distance(int f, double i) : feet(f), inches(i) {}

    // Function to add distances
    void add(const Distance& other) {
        feet += other.feet;
        inches += other.inches;

        while (inches >= 12.0) {
            inches -= 12.0;
            feet++;
        }
    }

    // Function to display distance
    void display() {
        std::cout << "Distance: " << feet << " feet " << inches << " inches\n";
    }
};

int main() {
    Distance d1(5, 8.5);
    Distance d2(2, 10.0);

    d1.add(d2);
    d1.display();

    return 0;
}

/*
This program defines a class Distance with attributes feet and inches.
It has a method to add two distances and display the result in feet-inches format.
The main function demonstrates the use of objects to add distances.
*/
