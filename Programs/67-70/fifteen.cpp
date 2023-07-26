/*
Create a virtual base class Travel with pure virtual functions bookTicket() and calculateFare().
Implement derived classes Flight, Train, and Bus that inherit from Travel. In a travel booking system, use these
classes to book tickets for different modes of travel and calculate the fare accordingly.

Input:
Travel* flight = new Flight("Flight", 2, 300.0);
flight->bookTicket();
flight->calculateFare();
Output:
Booking 2 flight ticket(s) for Flight mode.
Total fare for 2 passengers in Flight mode: $600

Input:
Travel* train = new Train("Train", 3, 50.0);
train->bookTicket();
train->calculateFare();
Output:
Booking 3 train ticket(s) for Train mode.
Total fare for 3 passengers in Train mode: $150


Input:
Travel* bus = new Bus("Bus", 4, 20.0);
bus->bookTicket();
bus->calculateFare();
Output:
Booking 4 bus ticket(s) for Bus mode.
Total fare for 4 passengers in Bus mode: $80

*/

#include <iostream>
#include <string>
using namespace std;

// Base class Travel
class Travel {
protected:
    string mode;
    int passengers;
public:
    Travel(string _mode, int _passengers) : mode(_mode), passengers(_passengers) {}
    virtual void bookTicket() = 0;
    virtual void calculateFare() = 0;
};

// Derived class Flight from Travel
class Flight : public Travel {
private:
    double baseFare;
public:
    Flight(string _mode, int _passengers, double _baseFare) : Travel(_mode, _passengers), baseFare(_baseFare) {}

    // Override the base class function to book a flight ticket
    void bookTicket() override {
        cout << "Booking " << passengers << " flight ticket(s) for " << mode << " mode." << endl;
    }

    // Override the base class function to calculate flight fare
    void calculateFare() override {
        double totalFare = baseFare * passengers;
        cout << "Total fare for " << passengers << " passengers in " << mode << " mode: $" << totalFare << endl;
    }
};

// Derived class Train from Travel
class Train : public Travel {
private:
    double ticketPrice;
public:
    Train(string _mode, int _passengers, double _ticketPrice) : Travel(_mode, _passengers), ticketPrice(_ticketPrice) {}

    // Override the base class function to book a train ticket
    void bookTicket() override {
        cout << "Booking " << passengers << " train ticket(s) for " << mode << " mode." << endl;
    }

    // Override the base class function to calculate train fare
    void calculateFare() override {
        double totalFare = ticketPrice * passengers;
        cout << "Total fare for " << passengers << " passengers in " << mode << " mode: $" << totalFare << endl;
    }
};

// Derived class Bus from Travel
class Bus : public Travel {
private:
    double farePerPerson;
public:
    Bus(string _mode, int _passengers, double _farePerPerson) : Travel(_mode, _passengers), farePerPerson(_farePerPerson) {}

    // Override the base class function to book a bus ticket
    void bookTicket() override {
        cout << "Booking " << passengers << " bus ticket(s) for " << mode << " mode." << endl;
    }

    // Override the base class function to calculate bus fare
    void calculateFare() override {
        double totalFare = farePerPerson * passengers;
        cout << "Total fare for " << passengers << " passengers in " << mode << " mode: $" << totalFare << endl;
    }
};

int main() {
    // Create instances of derived classes and book tickets for different modes of travel
    Travel* flight = new Flight("Flight", 2, 300.0);
    Travel* train = new Train("Train", 3, 50.0);
    Travel* bus = new Bus("Bus", 4, 20.0);

    flight->bookTicket();
    flight->calculateFare();

    train->bookTicket();
    train->calculateFare();

    bus->bookTicket();
    bus->calculateFare();

    // Free the memory allocated for each instance
    delete flight;
    delete train;
    delete bus;

    return 0;
}

/*
In this program, we create a virtual base class Travel with pure virtual functions bookTicket() and calculateFare().
The derived classes Flight, Train, and Bus inherit from Travel and provide their implementations for booking tickets
and calculating fares based on the mode of travel.

*/


