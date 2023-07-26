/*
Create one Base class and derive Derived class from it. Add default and parameterized constructors
in both classes. Pass Arguments to constructor and monitor it.

Input: Derived d(25, 15)
Output: Param of Base 25
        Param of Derived 15

*/

#include <iostream>
using namespace std;
class Base
{
    public:
        Base ()
        {
            cout << "Default of Base" << endl;
        }
        Base (int x)
        {
            cout << "Param of Base " << x << endl;
        }
};

class Derived : public Base
{
    public:
        Derived ()
        {
            cout << "Default of Derived" << endl;
        }
        Derived (int a)
        {
            cout << "Param of Derived : " << a << endl;
        }
        Derived(int x, int a) : Base(x)
        {
         cout << "Param of Derived " << a;
        }
};

int main()
{
    Derived d(25, 15);
}
/*
In above cpp program we have Base and Derived class with single inheritance.
We have passed arguments to Derived class. Derived class passed argument of Base to it.
*/
