/*
 Design a hierarchy for electronic devices, including a base class for Device and derived classes for Smartphone,
 Laptop, and Television.
 Each device should have specific attributes like screen size and battery life.

Input:
Device* device1 = new Smartphone("Apple", 6.1, 20);
device1->displaySpecs();
Output:
Brand: Apple
Screen Size: 6.1 inches
Battery Life: 20 hours

Input:
Device* device2 = new Laptop("Dell", 15.6, 8);
device2->displaySpecs();
Output:
Brand: Dell
Screen Size: 15.6 inches
Battery Life: 8 hours

Input:
Device* device3 = new Television("Samsung", 55);
device3->displaySpecs();
Output:
Brand: Samsung
Screen Size: 55 inches


*/

#include <iostream>
#include <string>
using namespace std;

// Base class representing a generic electronic Device
class Device {
protected:
    string brand;
public:
    Device(string _brand) : brand(_brand) {}
    // Pure virtual function to make this class abstract, ensuring it cannot be instantiated.
    virtual void displaySpecs() const = 0;
};

// Derived class representing a Smartphone, inheriting from Device
class Smartphone : public Device {
private:
    double screenSize;
    int batteryLife;
public:
    Smartphone(string _brand, double _screenSize, int _batteryLife)
        : Device(_brand), screenSize(_screenSize), batteryLife(_batteryLife) {}

    // Implementing the virtual function to provide specific behavior for Smartphones.
    void displaySpecs() const override {
        cout << "Brand: " << brand << "\nScreen Size: " << screenSize << " inches"
             << "\nBattery Life: " << batteryLife << " hours" << endl;
    }
};

// Derived class representing a Laptop, inheriting from Device
class Laptop : public Device {
private:
    double screenSize;
    int batteryLife;
public:
    Laptop(string _brand, double _screenSize, int _batteryLife)
        : Device(_brand), screenSize(_screenSize), batteryLife(_batteryLife) {}

    // Implementing the virtual function to provide specific behavior for Laptops.
    void displaySpecs() const override {
        cout << "Brand: " << brand << "\nScreen Size: " << screenSize << " inches"
             << "\nBattery Life: " << batteryLife << " hours" << endl;
    }
};

// Derived class representing a Television, inheriting from Device
class Television : public Device {
private:
    double screenSize;
public:
    Television(string _brand, double _screenSize)
        : Device(_brand), screenSize(_screenSize) {}

    // Implementing the virtual function to provide specific behavior for Televisions.
    void displaySpecs() const override {
        cout << "Brand: " << brand << "\nScreen Size: " << screenSize << " inches" << endl;
    }
};

int main() {
    // Creating objects of the derived classes through the base class pointer.
    Device* device1 = new Smartphone("Apple", 6.1, 20);
    Device* device2 = new Laptop("Dell", 15.6, 8);
    Device* device3 = new Television("Samsung", 55);

    // Calling the displaySpecs function, which will be dynamically dispatched based on the object's actual type.
    device1->displaySpecs();
    device2->displaySpecs();
    device3->displaySpecs();

    // Cleaning up the allocated memory.
    delete device1;
    delete device2;
    delete device3;
    return 0;
}


/*
This program demonstrates hierarchical inheritance with the "Electronics Hierarchy" example. It defines a base class Device that represents a generic electronic device with a brand attribute. The base class also declares a pure virtual function displaySpecs(), making the class abstract, ensuring it cannot be instantiated directly.

The program then defines three derived classes, Smartphone, Laptop, and Television, all inheriting from the Device class. Each of these classes overrides the displaySpecs() function to provide specific behavior for Smartphones, Laptops, and Televisions, respectively.

In the main() function, we create objects of the derived classes (Smartphone, Laptop, and Television) using the base class pointer (Device*). This demonstrates polymorphism as the displaySpecs() function is called through the base class pointer, but it is dynamically dispatched to the appropriate function based on the actual type of the object.

When we call device1->displaySpecs(), it calls the displaySpecs() function of the Smartphone class, displaying the specifications of the smartphone (Brand, Screen Size, and Battery Life). Similarly, calling device2->displaySpecs() displays the specifications of the laptop, and calling device3->displaySpecs() displays the specifications of the television.

Finally, we delete the dynamically allocated objects to free up memory.
*/

