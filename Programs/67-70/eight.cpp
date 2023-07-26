/*
Imagine you are the owner of a coffee shop, and you want to create a coffee machine system for your baristas to use.
You decide to build a C++ program to simulate the coffee machines in your shop. The program will include a base class called CoffeeMachine and
two derived classes, EspressoMachine and LatteMachine.

Each coffee machine in your shop operates differently to brew the perfect coffee.
The EspressoMachine is designed to brew espresso with less coffee beans to create a strong and concentrated shot of coffee. On the other hand,
the LatteMachine is equipped to brew latte with more coffee beans, which will result in a smooth and creamy coffee drink.

Your C++ program will implement the CoffeeMachine base class, which will have a virtual function called brewCoffee().
This function will be overridden by the derived classes EspressoMachine and LatteMachine, each with its unique brewing process.

Input: EspressoMachine()
Output: Espresso brewed successfully.

Input: LatteMachine()
Output: Latte brewed successfully.

*/

#include <iostream>
#include <string>

class CoffeeMachine {
protected:
    int coffeeLevel;
public:
    CoffeeMachine() : coffeeLevel(100) {}

    virtual void brewCoffee() {
        if (coffeeLevel >= 10) {
            coffeeLevel -= 10;
            std::cout << "Coffee brewed successfully." << std::endl;
        } else {
            std::cout << "Coffee machine is out of coffee beans." << std::endl;
        }
    }
};

class EspressoMachine : public CoffeeMachine {
public:
    void brewCoffee() override {
        if (coffeeLevel >= 5) {
            coffeeLevel -= 5;
            std::cout << "Espresso brewed successfully." << std::endl;
        } else {
            std::cout << "Espresso machine is out of coffee beans." << std::endl;
        }
    }
};

class LatteMachine : public CoffeeMachine {
public:
    void brewCoffee() override {
        if (coffeeLevel >= 15) {
            coffeeLevel -= 15;
            std::cout << "Latte brewed successfully." << std::endl;
        } else {
            std::cout << "Latte machine is out of coffee beans." << std::endl;
        }
    }
};

int main() {
    CoffeeMachine* coffeeMachine1 = new EspressoMachine();
    CoffeeMachine* coffeeMachine2 = new LatteMachine();

    coffeeMachine1->brewCoffee();
    coffeeMachine2->brewCoffee();

    delete coffeeMachine1;
    delete coffeeMachine2;

    return 0;
}

