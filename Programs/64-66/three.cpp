/*
Create a base class "Base" and two derived classes "A" and "B."
Implement a class "C" that inherits from both "A" and "B," and do dynamic memory allocation
with virtual base classes.
*/

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor" << endl;
    }

    virtual ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class A : virtual public Base {
public:
    A() {
        cout << "A's Constructor" << endl;
    }

    virtual ~A() {
        cout << "A's Destructor" << endl;
    }
};

class B : virtual public Base {
public:
    B() {
        cout << "B's Constructor" << endl;
    }

    virtual ~B() {
        cout << "B's Destructor" << endl;
    }
};

class C : public A, public B {
public:
    C() {
        cout << "C's Constructor" << endl;
    }

    ~C() {
        cout << "C's Destructor" << endl;
    }
};

int main() {
    Base* obj = new C();
    delete obj;

    return 0;
}
