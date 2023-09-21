/*
function overloading:
 Online Shopping Cart
Suppose you are developing software for an online shopping website. In this system, customers can add items to their shopping carts. The shopping cart system needs to calculate the total price based on the items added, but the items can be of different types (e.g., books, electronics, clothing), and each type may have a different price calculation logic.

To handle this scenario, you can use function overloading for the `calculateTotalPrice` function. Depending on the type of item(s) in the cart, a different version of the function will be called.
*/

#include <iostream>
#include <vector>

class Item {
public:
    std::string name;
    double price;

    Item(const std::string& n, double p) : name(n), price(p) {}
};

class ShoppingCart {
private:
    std::vector<Item> items;

public:
    // Function to add an item to the cart
    void addItem(const Item& item) {
        items.push_back(item);
    }

    // Function to calculate the total price of the items in the cart
    double calculateTotalPrice() {
        double total = 0.0;

        // Iterate through the items and add their prices
        for (const Item& item : items) {
            total += item.price;
        }

        return total;
    }

    // Function overloading for calculating the total price with a discount
    double calculateTotalPrice(double discountPercentage) {
        double total = calculateTotalPrice();
        double discount = total * (discountPercentage / 100.0);
        return total - discount;
    }
};

int main() {
    // Create some sample items
    Item book("Book", 20.0);
    Item laptop("Laptop", 800.0);
    Item shirt("Shirt", 25.0);

    // Create a shopping cart and add items to it
    ShoppingCart cart;
    cart.addItem(book);
    cart.addItem(laptop);
    cart.addItem(shirt);

    // Calculate the total price without a discount
    double totalWithoutDiscount = cart.calculateTotalPrice();

    // Calculate the total price with a 10% discount
    double totalWithDiscount = cart.calculateTotalPrice(10.0);

    std::cout << "Total without discount: " << totalWithoutDiscount << std::endl;
    std::cout << "Total with 10% discount: " << totalWithDiscount << std::endl;

    return 0;
}

/*

// Constructor for the Item class
Item(const std::string& itemName, double itemPrice) {
    // Initialize the name and price of the item
    name = itemName;
    price = itemPrice;
}

In this scenario, we have used function overloading for the `calculateTotalPrice` method of the `ShoppingCart` class. The first version calculates the total price without any discount, while the second version calculates the total price with a discount percentage passed as an argument.

By using function overloading, the code remains clean and intuitive, and you can easily extend it to handle different pricing strategies for various types of items in the shopping cart.
*/
