/*
Create a base class "Base" and two derived classes "A" and "B."
Implement a class "C" that inherits from both "A" and "B" with virtual inheritance, and demonstrate constructors in virtual inheritance.
*/

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor" << endl;
    }
};

class A : virtual public Base {
public:
    A() {
        cout << "A's Constructor" << endl;
    }
};

class B : virtual public Base {
public:
    B() {
        cout << "B's Constructor" << endl;
    }
};

class C : public A, public B {
public:
    C() {
        cout << "C's Constructor" << endl;
    }
};

int main() {
    C obj;

    return 0;
}
