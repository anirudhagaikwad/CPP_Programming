/*

You are a software developer working on an online shopping cart application. The shopping cart stores the quantity and price of items added
by the user. As part of the application, you need to implement a function template to compare the total price of items in the shopping cart
before and after applying a discount. The function should determine whether the discounted total price is equal to the original
total price or not.


Input:
Original Total Price: $100.5
Discounted Total Price: $80.4

Output:
Comparing the two total prices: The two values are not equal.

*/


#include <iostream>
using namespace std;

// Function template to compare two values of the same data type and print the result
template <typename T>
void compareValues(T value1, T value2) {
    if (value1 == value2) {
        cout << "The two values are equal." << endl;
    } else {
        cout << "The two values are not equal." << endl;
    }
}

int main() {
    // Comparing the total price before and after applying the discount

    double originalTotalPrice = 100.50; // Original total price of items in the shopping cart
    double discountedTotalPrice = 80.40; // Total price after applying a discount

    cout << "Original Total Price: $" << originalTotalPrice << endl;
    cout << "Discounted Total Price: $" << discountedTotalPrice << endl;

    cout << "Comparing the two total prices: ";
    compareValues<double>(originalTotalPrice, discountedTotalPrice);

    return 0;
}

/*
In this scenario, the function template compareValues is used to compare the original total price of items in the shopping cart
(originalTotalPrice) with the total price after applying a discount (discountedTotalPrice). The function template checks whether the two
values are equal or not and prints the result accordingly.
The output will indicate whether the discounted total price is equal to the original total price or not.

*/


