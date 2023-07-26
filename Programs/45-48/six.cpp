/*
Create a class called "Counter" that has a static member variable to count the number of objects created.
Implement a constructor to update the counter.
*/

#include <iostream>

class Counter {
private:
    static int count;
    int id;

public:
    // Constructor
    Counter() {
        count++;
        id = count;
    }

    static int getCount() {
        return count;
    }

    void displayId() {
        std::cout << "Object ID: " << id << std::endl;
    }
};

int Counter::count = 0; // Initializing static member variable

int main() {
    Counter obj1, obj2, obj3;
    obj1.displayId();
    obj2.displayId();
    obj3.displayId();
    std::cout << "Total objects created: " << Counter::getCount() << std::endl;
    return 0;
}

/*
This program defines a class Counter with a static member variable count to keep track of the number
of objects created. The constructor increments this counter and assigns a unique ID to each object.
The displayId() method prints the object's ID, and the getCount() method returns the total number of
objects created.
*/
