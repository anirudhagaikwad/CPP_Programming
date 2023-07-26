/*
Create a class Counter with a static variable count and a constructor and destructor to increment and decrement the count
respectively.
Test the class by creating multiple objects and observe how the count behaves.
*/

#include <iostream>

class Counter {
public:
    Counter() {
        ++count;
    }

    ~Counter() {
        --count;
    }

    static int getCount() {
        return count;
    }

private:
    static int count;
};

int Counter::count = 0;

int main() {
    Counter obj1;
    Counter obj2;

    std::cout << "Count: " << Counter::getCount() << std::endl;
    return 0;
}

/*
The program defines a class Counter with a static integer variable count.
The constructor increments the count, and the destructor decrements it.
We test this by creating two objects of Counter, and then we print the current count using the
static member function getCount().

*/
