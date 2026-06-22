// Topic: Static Data Members in C++ (Display in member function)
// Static data members are shared across all objects of the class
// Useful for tracking totals or counts across all instances

#include<iostream>
using namespace std;

class Customer{
    string name;
    int ac, balance;
    static int total_customer;   // shared across all Customer objects
    public:

    Customer(string name , int ac , int balance){
        this->name    = name;
        this->ac      = ac;
        this->balance = balance;
        total_customer++;   // increments each time a new object is created
    }

    void display(){

        cout<<name<<" "<<ac<<" "<<balance<<" "<<total_customer<<" "<<endl;


    }

   

};


// Initialize static variable outside class (mandatory)
int Customer:: total_customer = 0;


int main(){

    Customer A1("Prashant" , 1 , 1000);  // total_customer becomes 1
    Customer A2("Navnath" , 2 , 2000);   // total_customer becomes 2
    
    A1.display();   // shows total_customer = 2
    A2.display();
    Customer A3("Rohit" , 3, 3000);      // total_customer becomes 3
    A3.display();   // shows total_customer = 3

}