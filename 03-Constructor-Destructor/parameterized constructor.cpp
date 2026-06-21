// Topic: Parameterized Constructor in C++
// A parameterized constructor accepts arguments to initialize object with custom values
// Unlike default constructor, values are passed at object creation time

#include<iostream>
using namespace std;

class Customer
{
    string name;
    int ac;
    int balance;
    int *roi;


    public:
    // Default Constructor - initializes with default values
    Customer()                
    {       
        name = "Prashant";
        ac = 4;
        balance = 100;
        roi = new int[100];
    }

    // Parameterized Constructor - accepts values to initialize object
    Customer(string a , int b , int c)                
    {       
        name = a;
        ac = b;
        balance = c;
    }

   
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<endl;
    }

};

int main(){
    Customer A1;                             // calls default constructor
    Customer A2("PrashantJ" , 121, 100000); // calls parameterized constructor
    
    A1.display();
    A2.display();
   
}   

