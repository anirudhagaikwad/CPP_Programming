/*
Create a class BankATM with attributes balance and accountNumber.
Implement methods to check balance, deposit money, and withdraw money with account number validation.
*/

#include <iostream>

class BankATM {
private:
    double balance;
    int accountNumber;

public:
    BankATM(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    double checkBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(int accNum, double amount) {
        if (accNum == accountNumber) {
            if (amount <= balance)
                balance -= amount;
            else
                std::cout << "Insufficient balance!" << std::endl;
        } else {
            std::cout << "Invalid account number!" << std::endl;
        }
    }
};

int main() {
    BankATM atm(12345, 1000.0);
    std::cout << "Balance: " << atm.checkBalance() << std::endl;
    atm.deposit(500.0);
    std::cout << "Balance: " << atm.checkBalance() << std::endl;
    atm.withdraw(12345, 200.0);
    std::cout << "Balance: " << atm.checkBalance() << std::endl;
    atm.withdraw(54321, 300.0); // Invalid account number
    return 0;
}

/*
This program simulates a bank ATM using the class BankATM.
It allows users to check balance, deposit, and withdraw money.
It performs account number validation before processing withdrawals.

*/

