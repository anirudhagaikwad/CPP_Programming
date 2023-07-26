/*
Write a program that leads to ambiguity of the "diamond problem" in C++ programming using multiple inheritance
and resolve ambiguity using virtual base class.

*/

#include<iostream>
using namespace std;
//Diamond Problem in C++ Programming
class A
{
public:
    void display()
        {
            cout<<"Display Method in A ";
        }
};
class B:virtual public A
{
    public:
    void show()
        {
            cout<<"Show Method in B ";
        }
};
class C:virtual public A
{

};
class D:public B,public C
{

};
int main()
{
    D o;
    o.display();

    return 0;
}

/*
Let's understand it step by step:

First, we define a class A with a public member function display() that simply prints the message "Display Method in A" to the console.
Next, we define a class B that is derived from class A using virtual inheritance. Class B has a public member function show() that simply prints the message "Show Method in B" to the console.
Then, we define a class C that is also derived from class A using virtual inheritance.
Finally, we define a class D that is derived from both classes B and C. Class D does not have any additional members or methods.
In the main function, we create an object of class D and call the display() method of class A using the object. Since class B and class C both virtually inherit from class A, the display() method of class A is only included once in the inheritance hierarchy, even though it is inherited by both class B and class C.
Thus, the output of the program will be "Display Method in A" when we call the display() method of class A using the D object o.
*/
