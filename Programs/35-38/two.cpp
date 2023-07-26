/*
Create a class BankAccount with attributes accountNumber, holderName, and balance.
Implement methods to deposit and withdraw money, and to display account details.

*/

#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string holderName;
    double balance;

public:
    BankAccount(int accNum, const std::string& name, double initialBalance)
        : accountNumber(accNum), holderName(name), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            std::cout << "Insufficient balance!" << std::endl;
    }

    void display() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Holder Name: " << holderName << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount account(12345, "John Doe", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.display();
    return 0;
}

/*
This program simulates a bank account using a class BankAccount.
It includes methods to deposit, withdraw, and display account details.
*/
