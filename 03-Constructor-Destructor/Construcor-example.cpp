// Topic: Constructor Example in C++
// A constructor is a special function that runs automatically when an object is created
// It has the same name as the class and no return type

#include<iostream>
using namespace std;

class Customer
{
    string name;
    int ac;
    int balance;


    public:
    
    // Default Constructor - called automatically when object is created without arguments
    Customer()                
    {       
        name = "Prashant";
        ac = 4;
        balance = 100;
    }
    // Display function to print customer details
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<endl;
    }

};

int main(){
    // Creating 3 objects - default constructor is called 3 times
    Customer A1, A2, A3;
    A1.display();
    A2.display();
    A3.display();
}   

