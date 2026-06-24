// ==========================================
// 🏦 OOP Mini Project: Bank Management System
// ==========================================
// This project implements all 4 pillars of OOP:
// 1. Encapsulation: Private data with getters/setters
// 2. Abstraction: Abstract base class Account with pure virtual function
// 3. Inheritance: SavingsAccount and CheckingAccount derived from Account
// 4. Polymorphism: Virtual functions for overridden behaviors
// Plus: Exception Handling and File Handling!

#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>

using namespace std;

// --- Custom Exception ---
class InsufficientFundsException : public exception {
public:
    const char* what() const noexcept override {
        return "❌ Error: Insufficient funds for this transaction!";
    }
};

// --- Abstract Base Class (Abstraction) ---
class Account {
protected: // Protected so derived classes can access
    string accountHolder;
    int accountNumber;
    double balance;

public:
    Account(string name, int accNo, double bal) {
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
    }

    // Pure virtual function (Must be overridden by child classes)
    virtual void displayDetails() const = 0; 

    // Encapsulation: Public methods to access/modify protected data
    int getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }

    virtual void deposit(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Deposit amount must be positive.");
        }
        balance += amount;
        cout << "✅ Successfully deposited ₹" << amount << endl;
    }

    virtual void withdraw(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Withdrawal amount must be positive.");
        }
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
        cout << "✅ Successfully withdrew ₹" << amount << endl;
    }

    virtual ~Account() {} // Virtual destructor
};

// --- Derived Class 1 (Inheritance) ---
class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(string name, int accNo, double bal, double rate) 
        : Account(name, accNo, bal), interestRate(rate) {}

    // Polymorphism: Overriding the pure virtual function
    void displayDetails() const override {
        cout << "-----------------------------------" << endl;
        cout << "🏦 Savings Account Details" << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account No.    : " << accountNumber << endl;
        cout << "Balance        : ₹" << balance << endl;
        cout << "Interest Rate  : " << interestRate << "%" << endl;
        cout << "-----------------------------------" << endl;
    }
    
    void addInterest() {
        double interest = balance * (interestRate / 100);
        deposit(interest);
        cout << "📈 Interest of ₹" << interest << " added!" << endl;
    }
};

// --- Derived Class 2 (Inheritance) ---
class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(string name, int accNo, double bal, double limit) 
        : Account(name, accNo, bal), overdraftLimit(limit) {}

    // Polymorphism: Overriding the pure virtual function
    void displayDetails() const override {
        cout << "-----------------------------------" << endl;
        cout << "💼 Current Account Details" << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account No.    : " << accountNumber << endl;
        cout << "Balance        : ₹" << balance << endl;
        cout << "Overdraft Limit: ₹" << overdraftLimit << endl;
        cout << "-----------------------------------" << endl;
    }

    // Polymorphism: Overriding the withdraw method to allow overdraft
    void withdraw(double amount) override {
        if (amount <= 0) {
            throw invalid_argument("Withdrawal amount must be positive.");
        }
        if (amount > balance + overdraftLimit) {
            throw InsufficientFundsException();
        }
        balance -= amount;
        cout << "✅ Successfully withdrew ₹" << amount << " (Overdraft used if balance negative)" << endl;
    }
};

// --- Main Application ---
int main() {
    cout << "\n🌟 Welcome to the OOP Bank Management System 🌟\n" << endl;

    // Using an array of pointers to the base class (Runtime Polymorphism)
    vector<Account*> bankAccounts;

    // Creating objects
    bankAccounts.push_back(new SavingsAccount("Prakash Palsaniya", 1001, 5000.0, 4.5));
    bankAccounts.push_back(new CurrentAccount("Rohit Negi", 2001, 10000.0, 5000.0));

    try {
        // Demonstrate Polymorphism: Calling overridden functions using base class pointers
        for (Account* acc : bankAccounts) {
            acc->displayDetails();
        }

        cout << "\n--- Performing Transactions ---" << endl;
        
        // Deposit
        bankAccounts[0]->deposit(1500);
        
        // Withdraw
        bankAccounts[1]->withdraw(12000); // Uses overdraft!

        // Attempting an invalid withdrawal to trigger custom exception
        cout << "\nTrying to withdraw 50000 from Savings Account..." << endl;
        bankAccounts[0]->withdraw(50000); 

    } catch (const InsufficientFundsException& e) {
        cout << e.what() << endl; // Catches custom exception
    } catch (const exception& e) {
        cout << "❌ Standard Exception: " << e.what() << endl;
    }

    // --- File Handling ---
    cout << "\n--- Saving Data to File ---" << endl;
    ofstream outFile("BankRecords.txt");
    if (outFile.is_open()) {
        outFile << "Bank Account Records:\n";
        for (Account* acc : bankAccounts) {
            outFile << "Account No: " << acc->getAccountNumber() << ", Balance: " << acc->getBalance() << "\n";
        }
        outFile.close();
        cout << "💾 Records successfully saved to 'BankRecords.txt'!" << endl;
    } else {
        cout << "❌ Error opening file for writing." << endl;
    }

    // Clean up dynamic memory
    for (Account* acc : bankAccounts) {
        delete acc;
    }

    return 0;
}
