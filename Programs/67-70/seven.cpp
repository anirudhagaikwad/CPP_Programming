/*
Imagine you are working on a smart home control system. The system allows users to control various devices remotely using a
centralized control panel. As part of this project, you are tasked with creating a C++ program to implement the functionality of remote
controlling TVs and DVD players.
To achieve this, you will define a base class called RemoteControl and two derived classes, TVRemote and DVDRemote.

Input:
remote1 = new TVRemote()
remote1->turnOn()
remote1->turnOff()

Output:
TV: Turning ON
TV: Turning OFF

Input:
remote2 = new DVDRemote()
remote2->turnOn()
remote2->turnOff()

Output:
DVD Player: Turning ON
DVD Player: Turning OFF

*/

#include <iostream>
#include <string>

class RemoteControl {
public:
    virtual void turnOn() {
        std::cout << "Remote control: Turning ON" << std::endl;
    }

    virtual void turnOff() {
        std::cout << "Remote control: Turning OFF" << std::endl;
    }
};

class TVRemote : public RemoteControl {
public:
    void turnOn() override {
        std::cout << "TV: Turning ON" << std::endl;
    }

    void turnOff() override {
        std::cout << "TV: Turning OFF" << std::endl;
    }
};

class DVDRemote : public RemoteControl {
public:
    void turnOn() override {
        std::cout << "DVD Player: Turning ON" << std::endl;
    }

    void turnOff() override {
        std::cout << "DVD Player: Turning OFF" << std::endl;
    }
};

int main() {
    RemoteControl* remote1 = new TVRemote();
    RemoteControl* remote2 = new DVDRemote();

    remote1->turnOn();
    remote1->turnOff();

    remote2->turnOn();
    remote2->turnOff();

    delete remote1;
    delete remote2;

    return 0;
}

/*
The program defines a base class RemoteControl and two derived classes TVRemote and DVDRemote.
The base class RemoteControl has virtual functions turnOn() and turnOff() to represent the actions of turning the
remote control on and off. The TVRemote class overrides the turnOn() and turnOff() functions to represent the actions of
turning the TV on and off. The DVDRemote class overrides the turnOn() and turnOff() functions to represent the actions of
turning the DVD player on and off. In the main() function, objects of TVRemote and DVDRemote are created, and their respective
turnOn() and turnOff() functions are called to simulate turning the devices on and off.

*/




