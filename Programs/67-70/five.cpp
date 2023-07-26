/*
Imagine a scenario where a bank wants to create a program to manage different types of bank accounts for its customers.
They have decided to implement a C++ program to achieve this. The program will include a base class called "BankAccount" and two derived classes,
"SavingsAccount" and "CheckingAccount."
Each account, whether it's a savings account or a checking account, will have a common function called "displayBalance()."
However, the bank wants to offer additional features specific to each account type. For "SavingsAccount," they want to implement a function
called "calculateInterest()." This function will calculate the interest earned on the savings account based on the account balance and the
specified interest rate.
For "CheckingAccount," they want to implement a function called "deductTransactionFee()."
This function will deduct a small transaction fee from the checking account balance every time the account holder performs a transaction.
Write a program to Help Bank to achieve their goal.

Input: SavingsAccount("SAV001", 1000, 5)
       savingsAccount->calculateInterest()
Output: Interest amount: $50

Input: CheckingAccount("CHK001", 2000, 1.5)
      checkingAccount->deductTransactionFee()

Output: Transaction fee deducted.

*/


#include <iostream>
#include <string>

class BankAccount {
protected:
    std::string accountNumber; //store acc. no.
    double balance; //store acc. balance
public:
    BankAccount(const std::string& accNum, double bal) : accountNumber(accNum), balance(bal) {}

    virtual void displayBalance() {
        std::cout << "Account balance: $" << balance << std::endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate; //add interest rate for the savings account
public:
    SavingsAccount(const std::string& accNum, double bal, double intRate)
        : BankAccount(accNum, bal), interestRate(intRate) {}

    void displayBalance() override {
        std::cout << "Savings account balance: $" << balance << std::endl;
    }

    void calculateInterest() {
        double interestAmount = balance * interestRate / 100;
        std::cout << "Interest amount: $" << interestAmount << std::endl;
    }
};

class CheckingAccount : public BankAccount {
private:
    double transactionFee; //add transaction fee for the checking account
public:
    CheckingAccount(const std::string& accNum, double bal, double transFee)
        : BankAccount(accNum, bal), transactionFee(transFee) {}

    void displayBalance() override {
        std::cout << "Checking account balance: $" << balance << std::endl;
    }

    void deductTransactionFee() {
        balance -= transactionFee;
        std::cout << "Transaction fee deducted." << std::endl;
    }
};

int main() {
    BankAccount* account1 = new SavingsAccount("SAV001", 1000, 5);
    BankAccount* account2 = new CheckingAccount("CHK001", 2000, 1.5);

    account1->displayBalance();
    account2->displayBalance();

    SavingsAccount* savingsAccount = dynamic_cast<SavingsAccount*>(account1);
    if (savingsAccount)
        savingsAccount->calculateInterest();

    CheckingAccount* checkingAccount = dynamic_cast<CheckingAccount*>(account2);
    if (checkingAccount)
        checkingAccount->deductTransactionFee();

    delete account1;
    delete account2;

    return 0;
}

/*

The program defines a base class BankAccount and two derived classes SavingsAccount and CheckingAccount.
The base class BankAccount has a virtual function displayBalance() which is meant to be overridden by derived classes.
The SavingsAccount and CheckingAccount classes override the displayBalance() function to display the account balance for a
savings account and a checking account, respectively. In addition, the SavingsAccount class has a function calculateInterest()
to calculate and display the interest amount, and the CheckingAccount class has a function deductTransactionFee() to deduct a
transaction fee from the balance. In the main() function, objects of SavingsAccount and CheckingAccount are created and their
respective functions are called to display the account balance and perform specific account-related operations.

*/

