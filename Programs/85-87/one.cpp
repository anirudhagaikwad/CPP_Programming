/*
Simulate a bank account. Allow deposits and withdrawals, but throw exceptions for invalid balance and withdrawal amounts.

Input:
BankAccount account("123456789", 1000);
account.withdraw(1500);

Output:
Error: Insufficient balance!


Input:
BankAccount account("123456789", 900);
account.withdraw(300);

Output:
Withdrawal successful!

Input:
BankAccount account("123456789", 1000);
account.deposit(-500);

Output:
Error: Invalid deposit amount!


*/

#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(std::string accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount <= 0)
            throw "Invalid deposit amount!";
        balance += amount;
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount <= 0)
            throw "Invalid withdrawal amount!";
        if (amount > balance)
            throw "Insufficient balance!";
        balance -= amount;
        std::cout << "Withdrawal successful! ";
    }

    // Function to get the current balance of the account
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account("123456789", 1000);

    try {
        // Perform some transactions
        account.deposit(500); // Deposit $500
        account.withdraw(300); // Withdraw $300
        account.withdraw(1500); // Should throw "Insufficient balance!"
        // account.deposit(-500); // Should throw "Invalid deposit amount!"
    }
    catch (const char* error) {
        std::cout << "Error: " << error << std::endl;
    }

    return 0;
}

/*
The provided C++ program demonstrates a simple bank account simulation using a BankAccount class. The class contains a private member accountNumber of type std::string to store the account number and balance of type double to store the account balance.

The constructor of the BankAccount class takes two parameters: accNum, which is the account number, and initialBalance, which is the initial balance of the account. This constructor initializes the member variables accordingly.

The class has three public member functions:

deposit: This function allows depositing a positive amount of money into the account. It throws an exception with the message "Invalid deposit amount!" if the deposit amount is less than or equal to zero.

withdraw: This function allows withdrawing money from the account. It throws an exception with the message "Invalid withdrawal amount!" if the withdrawal amount is less than or equal to zero. It also throws "Insufficient balance!" if the withdrawal amount exceeds the current account balance. If the withdrawal is successful, it displays "Withdrawal successful!".

getBalance: This function returns the current balance of the account.

In the main function, an instance of the BankAccount class is created with an initial balance of 1000 and account number "123456789". The program then attempts several transactions, including a deposit and two withdrawals. The second withdrawal attempt of 1500 will result in an "Insufficient balance!" exception. If the commented line // account.deposit(-500); is uncommented, it will throw an "Invalid deposit amount!" exception.

Exception handling is implemented using a try-catch block. If an exception is thrown, the catch block catches the exception and displays an error message. In this case, the exception type is a C-style string (const char*) with the error message. For a more robust implementation, it is recommended to use custom exception classes that derive from std::exception to provide more detailed and structured error information.

*/




