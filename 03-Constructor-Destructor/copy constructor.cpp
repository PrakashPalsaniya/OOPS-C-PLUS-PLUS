// Topic: Copy Constructor in C++
// A copy constructor creates a new object as a copy of an existing object
// Syntax: ClassName(ClassName &objectName)

#include<iostream>
using namespace std;

class Customer
{
    string name;
    int ac;
    int balance;
    int *roi;


    public:
    // Default Constructor
    Customer()                
    {       
        name = "Prashant";
        ac = 4;
        balance = 100;
        roi = new int[100];
    }

    // Parameterized consructor
    Customer(string a , int b , int c)                
    {       
        name = a;
        ac = b;
        balance = c;
    }
    Customer(string a , int b){
        name = a;
        ac = b;
    }
   
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<endl;
    }
    // Copy Constructor - creates a new object by copying another
    Customer(Customer &B){
        name    = B.name;
        ac      = B.ac;
        balance = B.balance;
    }
};

int main(){
    Customer A1;                             // default constructor
    Customer A2("PrashantJ" , 121, 100000);  // parameterized constructor
    Customer A3("Navnath" ,  1);             // 2-argument constructor
    A1.display();
    A2.display();
    A3.display();

    Customer A4(A3);    // copy constructor - A4 is a copy of A3
    A4.display();

    Customer A5;        // default constructor
    A5 = A3;            // assignment operator (not copy constructor)
    A5.display();
   
}   

