/*
Create a Friend class that increments the private member of another class and demonstrate the usage
of the friend function for this purpose.
*/

#include <iostream>
using namespace std;

class Incrementer;

class Number {
private:
    int value;

public:
    Number(int num) : value(num) {}

    // Friend class declaration
    friend class Incrementer;

    void display() {
        cout << "Value: " << value << endl;
    }
};

class Incrementer {
public:
    void increment(Number& num) {
        num.value++;
    }
};

int main() {
    Number num(42);
    Incrementer inc;
    inc.increment(num);
    num.display();

    return 0;
}

/*
 In this program, we have two classes: Number and Incrementer. Number has a private member value,
 and Incrementer is a friend of Number, enabling it to increment the private member directly.
*/
