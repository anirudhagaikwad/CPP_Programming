
/*
Create a program that manages electronic devices, including information about brands, models, and sizes for smartwatches.

Input:
SmartWatch smartWatch("Apple", "Watch Series 6", "44mm");
smartWatch.displayInfo();

Output:
Brand: Apple
Model: Watch Series 6
Size: 44mm

*/

#include <iostream>
using namespace std;

class ElectronicDevice {
protected:
    string brand;

public:
    ElectronicDevice(string bd) : brand(bd) {}
    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class Phone : virtual public ElectronicDevice {
protected:
    string model;

public:
    Phone(string bd, string mdl) : ElectronicDevice(bd), model(mdl) {}
    void displayModel() {
        cout << "Model: " << model << endl;
    }
};

class Tablet : virtual public ElectronicDevice {
protected:
    string size;

public:
    Tablet(string bd, string sz) : ElectronicDevice(bd), size(sz) {}
    void displaySize() {
        cout << "Size: " << size << endl;
    }
};

class SmartWatch : public Phone, public Tablet {
public:
    SmartWatch(string bd, string mdl, string sz) : ElectronicDevice(bd), Phone(bd, mdl), Tablet(bd, sz) {}
    void displayInfo() {
        displayBrand();
        displayModel();
        displaySize();
    }
};

int main() {
    SmartWatch smartWatch("Apple", "Watch Series 6", "44mm");
    smartWatch.displayInfo();
    return 0;
}

/*
This program demonstrates hybrid inheritance with electronic devices.
The ElectronicDevice class contains information about the brand of the device.
The Phone and Tablet classes inherit virtually from ElectronicDevice and provide additional information specific to
phones and tablets. The SmartWatch class inherits from both Phone and Tablet, creating a hybrid inheritance structure.

*/

