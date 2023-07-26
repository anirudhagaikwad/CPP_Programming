/*
 Create a base class "A" with two derived classes "B" and "C."
 Implement a class "D" that inherits from both "B" and "C," and call base
 class constructors during multiple inheritance

 Input: D obj;
 Output:
    A's Constructor
    B's Constructor
    C's Constructor
    D's Constructor

*/

#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A's Constructor" << endl;
    }
};

class B : virtual public A {
public:
    B() {
        cout << "B's Constructor" << endl;
    }
};

class C : virtual public A {
public:
    C() {
        cout << "C's Constructor" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "D's Constructor" << endl;
    }
};

int main() {
    D obj;

    return 0;
}
