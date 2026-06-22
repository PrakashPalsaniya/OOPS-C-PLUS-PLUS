// Topic: Static Member Functions in C++
// Static member functions can be called WITHOUT creating an object
// They can only access static data members (not non-static ones)
// Call syntax: ClassName::functionName()

#include<iostream>
using namespace std;

class Customer{
    string name;
    int ac, balance;
    static int total_customer;   // counts total customers
    static int total_balance;    // tracks sum of all balances

    public:

    Customer(string name , int ac , int balance){
        this->name = name;
        this->ac = ac;
        this->balance = balance;
        total_customer++;
        total_balance +=balance;
    }

    // Static member function - can be called without an object
    // Can only use static data members
     static void accessStatic(){
        cout<<"total number of customer: "<<total_customer<<endl;
        cout<<"total balance           : "<<total_balance<<endl;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display(){

        cout<<name<<" "<<ac<<" "<<balance<<" "<<total_customer<<" "<<endl;


    }

   

    void display_total(){
        cout<<total_customer<<endl;
    }

   

};


// Initialize static variables outside class (mandatory)
int Customer:: total_customer = 0;
int Customer:: total_balance = 0;



int main(){

    Customer A1("Prashant" , 1 , 1000);
    Customer A2("Navnath" , 2 , 2000);
    Customer A3("Rohit" , 3, 3000);

    A1.deposit(800);              // A1 balance becomes 1800
    
    Customer::accessStatic();     // calling static function using class name

    A2.withdraw(300);             // A2 balance becomes 1700

    Customer::accessStatic();     // check updated totals

    
    

}