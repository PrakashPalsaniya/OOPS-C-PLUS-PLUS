// Topic: Inline Constructor (Member Initializer List) in C++
// Inline constructor uses initializer list to set values directly
// More efficient than assignment inside constructor body
// Syntax: ClassName(params) : member1(val1), member2(val2) { }

#include<iostream>
using namespace std;

class Customer
{
    string name;
    int ac;
    int balance;


    public:
    // Default Constructor
    Customer()                
    {       
        name = "Prashant";
        ac = 4;
        balance = 100;
    }

    
    // Constructor with 2 arguments
    Customer(string a , int b){
        name = a;
        ac   = b;
    }
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<endl;
    }


    // Inline Constructor using member initializer list
    // More efficient - initializes values directly instead of assigning later
    inline Customer(string a, int b , int c):name(a), ac(b),balance(c){

    }

};

int main(){
    Customer A1;
    Customer A2("PrashantJ" , 121, 100000);
    Customer A3("Navnath" ,  1);
    A1.display();
    A2.display();
    A3.display();
}   

