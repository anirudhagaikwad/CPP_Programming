/*
Create a base class "Device" and two derived classes "Keyboard" and "Mouse."
Implement a class "ComboDevice" that inherits from both "Keyboard" and "Mouse" and perform function overriding with
virtual base classes.

ComboDevice combo;
combo.type();// Output: Combo Device

*/

#include <iostream>
using namespace std;

class Device {
public:
    virtual void type() const {
        cout << "Generic Device" << endl;
    }
};

class Keyboard : virtual public Device {
public:
    void type() const override {
        cout << "Keyboard Device" << endl;
    }
};

class Mouse : virtual public Device {
public:
    void type() const override {
        cout << "Mouse Device" << endl;
    }
};

class ComboDevice : public Keyboard, public Mouse {
public:
    void type() const override {
        cout << "Combo Device" << endl;
    }
};

int main() {
    ComboDevice combo;
    combo.type();

    return 0;
}
