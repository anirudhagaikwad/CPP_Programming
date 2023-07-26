/*
Create a program for managing restaurant orders. Design a virtual base class Order and derived class Invoice.
Implement a virtual function calculateTotal() in the Order class, and override it in the Invoice class to calculate the total
amount to be paid including tax rate.

Input:
Order("Pizza", 2, 12.50)
Order("Burger", 3, 8.75)
Invoice("Pasta", 4, 9.25, 0.1)

Output:
Item: Pizza, Quantity: 2, Price Per Item: $12.5, Total Amount: $25
Item: Burger, Quantity: 3, Price Per Item: $8.75, Total Amount: $26.25
Item: Pasta, Quantity: 4, Price Per Item: $9.25, Total Amount: $40.7
*/

#include <iostream>
#include <vector>
using namespace std;

// Base class representing an Order
class Order {
public:
    string itemName;
    int quantity;
    double pricePerItem;

    Order(string _itemName, int _quantity, double _pricePerItem)
        : itemName(_itemName), quantity(_quantity), pricePerItem(_pricePerItem) {}

    // Virtual function to calculate the total amount for the order
    virtual double calculateTotal() const {
        return quantity * pricePerItem;
    }
};

// Derived class representing an Invoice, inheriting from Order
class Invoice : public Order {
private:
    double taxRate;
public:
    Invoice(string _itemName, int _quantity, double _pricePerItem, double _taxRate)
        : Order(_itemName, _quantity, _pricePerItem), taxRate(_taxRate) {}

    // Overriding the calculateTotal() function to include tax calculation
    double calculateTotal() const override {
        double subTotal = Order::calculateTotal();
        return subTotal + subTotal * taxRate;
    }
};

int main() {
    vector<Order*> orders;

    // Adding different orders to the vector
    orders.push_back(new Order("Pizza", 2, 12.50));
    orders.push_back(new Order("Burger", 3, 8.75));
    orders.push_back(new Invoice("Pasta", 4, 9.25, 0.1)); // Tax rate of 10%

    // Calculating and displaying the total amount for each order
    for (Order* order : orders) {
        cout << "Item: " << order->itemName << ", Quantity: " << order->quantity
             << ", Price Per Item: $" << order->pricePerItem
             << ", Total Amount: $" << order->calculateTotal() << endl;
    }

    // Cleaning up the allocated memory.
    for (Order* order : orders) {
        delete order;
    }

    return 0;
}

/*
This program simulates managing restaurant orders using virtual functions in C++. The program defines a base class Order, representing a generic order with attributes itemName, quantity, and pricePerItem. It also has a virtual function calculateTotal() that calculates the total amount to be paid for the order.

The program then defines a derived class Invoice, inheriting from the Order class. The Invoice class includes an additional attribute taxRate, representing the tax rate applicable to the order. The calculateTotal() function is overridden in the Invoice class to include tax calculation in the total amount to be paid.

In the main() function, we create a vector of Order* to hold pointers to different orders. We add instances of Order and Invoice to this vector. When we call calculateTotal() on each order, it dynamically dispatches the appropriate function based on the actual type of the object, considering polymorphism.

The program then displays the details of each order, including the item name, quantity, price per item, and the total amount to be paid, considering any applicable tax.

*/

