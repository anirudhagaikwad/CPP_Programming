/*
Implement a class hierarchy with base class "Base" and derived classes "A" and "B."
Make use of virtual destructors to ensure proper cleanup during multiple inheritance.


Input:
Base* obj = new D();
delete obj;

Output:
Base Constructor
A's Constructor
B's Constructor
D's Constructor
D's Destructor
B's Destructor
A's Destructor
Base Destructor

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

class D : public A, public B {
public:
    D() {
        cout << "D's Constructor" << endl;
    }

    ~D() {
        cout << "D's Destructor" << endl;
    }
};

int main() {
    Base* obj = new D();
    delete obj;

    return 0;
}
