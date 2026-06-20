// Topic: Access Specifiers in C++
// public    - accessible from anywhere
// private   - accessible only inside the class
// protected - accessible inside class and derived (child) classes

#include<iostream>
using namespace std;

class BankAccount {

    private:
    // Private members - cannot be accessed directly from outside
    int balance;
    string pin;

    protected:
    // Protected - will be accessible to child classes
    string accountType;

    public:
    // Public members - accessible from anywhere
    string ownerName;
    int accountNumber;

    // Public function to set private data safely
    void setBalance(int amount){
        if(amount >= 0){
            balance = amount;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    // Public function to read private data
    void display(){
        cout << "Owner   : " << ownerName << endl;
        cout << "Acc No  : " << accountNumber << endl;
        cout << "Balance : " << balance << endl;
        cout << "Type    : " << accountType << endl;
    }
};

int main(){

    BankAccount acc;

    // Accessing public members directly
    acc.ownerName     = "Prakash";
    acc.accountNumber = 1001;

    // Accessing private member via public function
    acc.setBalance(5000);

    acc.display();

    // acc.balance = 9999;  // ERROR: balance is private, not allowed

    return 0;
}
