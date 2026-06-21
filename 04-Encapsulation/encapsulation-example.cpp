// Topic: Encapsulation in C++
// Encapsulation = Data + Functions wrapped together in a class
// Private data is hidden from outside; only accessible through public methods
// This protects data from accidental modification

#include<iostream>
using namespace std;

class Customer{

    // Private data - hidden from outside world (encapsulated)
    string name;
    int ac, balance;
    int age;

    public:

    // Constructor to initialize private data
    Customer(string name , int ac , int balance, int age){
        this->name    = name;
        this->ac      = ac;
        this->balance = balance;
        this->age     = age;
    }

    // deposit() - public method to safely update private balance
    void deposit(int amount){
        if(amount > 0){
            balance += amount;
        }else{
            cout<<"invalid amount"<<endl;
        }
    }

    // updateAge() - validates before updating private age
    void updateAge(int age){
        if(age >= 0 && age < 100){
            this->age = age;
        }else{
            cout<<"invalid age"<<endl;
        }
    }

    // withdraw() - ensures amount is valid before reducing balance
    void withdraw(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
        }
    }

    void display(){

        cout<<name<<" "<<ac<<" "<<balance<<" "<<age<<""<<endl;


    }

   

};




int main(){

    Customer A1("Prashant" , 1 , 1000 , 22);
    Customer A2("Navnath" , 2 , 2000 , 22);
    Customer A3("Rohit" , 3,3000, 18);
    A1.deposit(+10);
    A1.display();
    A3.display();
    A3.updateAge(19);
    A3.display();
} 