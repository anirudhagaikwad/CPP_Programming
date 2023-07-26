/*
Implement a class representing a counter and overload the pre-increment and post-increment operators.
*/

#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c) : count(c) {}

    // Overloading pre-increment operator
    Counter operator++() {
        count++;
        return *this;
    }

    // Overloading post-increment operator
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c(5);

    ++c; // pre-increment
    c.display();

    c++; // post-increment
    c.display();

    return 0;
}

/*
This program creates a class Counter to represent a counting value.
The pre-increment and post-increment operators are overloaded to increment the counter.
The display() function is used to print the current count.

*/

