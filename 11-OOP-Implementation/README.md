# 🏦 OOP Mini Project: Bank Management System

Welcome to the **Bank Management System**, the final project for Day 10! This mini-project is designed to be the ultimate test of all the Object-Oriented Programming (OOP) concepts learned over the past 9 days in C++.

## 🎯 What it Demonstrates

This single C++ file brings together every major concept:

- **Encapsulation:** Keeps sensitive data like `balance` and `accountNumber` protected from direct outside access. They can only be modified through secure `deposit()` and `withdraw()` functions.
- **Abstraction:** Uses an Abstract Base Class (`Account`) with a Pure Virtual Function (`displayDetails()`). You interact with the concept of an account without needing to know if it's a Savings or Current account under the hood.
- **Inheritance:** The `SavingsAccount` and `CurrentAccount` classes inherit from the base `Account` class, reusing the common code while adding their own specific rules (like interest rates and overdraft limits).
- **Polymorphism:** Uses Virtual Functions so that the `withdraw()` and `displayDetails()` methods behave differently depending on the specific type of account being used at runtime.
- **Exception Handling:** Gracefully handles errors (like trying to withdraw more money than is available) using custom exceptions (`InsufficientFundsException`), preventing the program from crashing.
- **File Handling:** At the end of the program, all account records are securely saved to a text file (`BankRecords.txt`) using `ofstream`.

## 🚀 How to Run

1. Open your terminal or command prompt.
2. Navigate to this folder (`11-OOP-Implementation`).
3. Compile the code using g++:
   ```bash
   g++ BankSystemProject.cpp -o BankSystem
   ```
4. Run the executable:
   - On Windows: `.\BankSystem.exe`
   - On Mac/Linux: `./BankSystem`

## 📂 Output

When you run the program, you will see output demonstrating deposits, withdrawals, overdraft usage, error handling, and finally, a message confirming that data has been saved to `BankRecords.txt`.

---
*Created as part of the 10-Day C++ OOP Learning Journey.*
