// Topic: Constructor Overloading in C++
// Having multiple constructors with different parameters in the same class
// Compiler picks the right constructor based on arguments passed

#include<iostream>
using namespace std;

class Customer
{
    string name;
    int ac;
    int balance;


    public:
    // Default Constructor - no arguments
    Customer()                
    {       
        name = "Prashant";
        ac = 4;
        balance = 100;
    }

    // Parameterized Constructor - 3 arguments
    Customer(string a , int b , int c)                
    {       
        name = a;
        ac = b;
        balance = c;
    }
    // Overloaded Constructor - 2 arguments
    Customer(string a , int b){
        name = a;
        ac = b;
    }
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<endl;
    }

};

int main(){
    Customer A1;                            // calls default constructor
    Customer A2("PrashantJ" , 121, 100000); // calls 3-argument constructor
    Customer A3("Navnath" ,  1);            // calls 2-argument constructor
    A1.display();
    A2.display();
    A3.display();
}   

