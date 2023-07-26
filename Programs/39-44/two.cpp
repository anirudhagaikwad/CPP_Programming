/*
Create a class representing a bank account.
The account should have private data members for the account number, account holder's name, and balance.
Implement methods to deposit, withdraw, and display the account details. Use appropriate access specifiers and static members to keep track
of the total number of accounts and the total balance across all accounts.
*/

#include <iostream>
#include <string>

class BankAccount {
private:
    static int totalAccounts;
    static double totalBalance;
    int accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& name, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    void displayAccountDetails() const;
    static int getTotalAccounts();
    static double getTotalBalance();
};

int BankAccount::totalAccounts = 0;
double BankAccount::totalBalance = 0;

BankAccount::BankAccount(const std::string& name, double initialBalance) {
    totalAccounts++;
    accountNumber = totalAccounts;
    accountHolderName = name;
    balance = initialBalance;
    totalBalance += initialBalance;
}

void BankAccount::deposit(double amount) {
    balance += amount;
    totalBalance += amount;
}

void BankAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        totalBalance -= amount;
    } else {
        std::cout << "Insufficient balance!" << std::endl;
    }
}

void BankAccount::displayAccountDetails() const {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Account Holder: " << accountHolderName << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}

int BankAccount::getTotalAccounts() {
    return totalAccounts;
}

double BankAccount::getTotalBalance() {
    return totalBalance;
}

int main() {
    BankAccount acc1("John Doe", 5000);
    BankAccount acc2("Jane Smith", 8000);

    acc1.deposit(2000);
    acc2.withdraw(3000);

    acc1.displayAccountDetails();
    acc2.displayAccountDetails();

    std::cout << "Total Accounts: " << BankAccount::getTotalAccounts() << std::endl;
    std::cout << "Total Balance: " << BankAccount::getTotalBalance() << std::endl;

    return 0;
}

/*
This program demonstrates the use of access specifiers (private, public) and static members (totalAccounts and totalBalance).
It allows the user to create bank accounts, deposit and withdraw money, and display account details.
The static members are used to keep track of the total number of accounts and the total balance across all accounts.
*/

