/*
Write a C++ program by creating three classes: A, B, and C.
Class A is the base class and contains two data members x and y, and a member function getdata() to input values for x and y.
Class B is derived from class A and contains a member function product() that calculates and displays the product of x and y.
Class C is also derived from class A and contains a member function sum() that calculates and displays the sum of x and y.
In the main() function, create objects of classes B and C, input values for x and y for each object using the getdata() function,
and then calculate and display the product for object B and the sum for object C.

Input: Enter value of x and y: 4 5
Output: Product= 20

Input: Enter value of x and y: 2 4
Output: Sum= 6
*/

#include <iostream>
using namespace std;

class A // Base class
{
public:
    int x, y; // data members

    void getdata() // to input x and y
    {
        cout << "Enter value of x and y:\n";
        cin >> x >> y;
    }
};

class B : public A // B is derived from class A
{
public:
    void product()
    {
        cout << "\nProduct= " << x * y << endl; // Perform product
    }
};

class C : public A // C is also derived from class A
{
public:
    void sum()
    {
        cout << "\nSum= " << x + y; // Perform sum
    }
};

int main()
{
    B obj1; // object of derived class B
    C obj2; // object of derived class C

    obj1.getdata(); // input x and y for obj1
    obj1.product(); // calculate and display the product for obj1

    obj2.getdata(); // input x and y for obj2
    obj2.sum();     // calculate and display the sum for obj2

    return 0;
}
