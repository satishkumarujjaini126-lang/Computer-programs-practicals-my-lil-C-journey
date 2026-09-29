#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    long long accountNumber;
    string accountType;  // "Savings" or "Current"
    double balance;

public:
    // Constructor
    BankAccount(string n, long long accNo, string type, double bal = 0.0) {
        name = n;
        accountNumber = accNo;
        accountType = type;
        balance = balance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name          : " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type  : " << accountType << endl;
        cout << "Balance       : " << balance << endl;
    }
};

int main() {
    BankAccount acc("Amit Kumar", 1001, "Savings", 5000);

    acc.display();
    acc.deposit(3000);
    acc.withdraw(2000);
    acc.withdraw(10000);  // Will show insufficient balance
    acc.display();

    return 0;
}