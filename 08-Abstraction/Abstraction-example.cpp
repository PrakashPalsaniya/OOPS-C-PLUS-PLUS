// Topic: Abstraction in C++
// Abstraction = showing only what is necessary, hiding internal details
// Achieved using access specifiers (private/protected) and abstract classes
// User interacts with public methods without knowing internal implementation

#include<iostream>
using namespace std;

class Customer{

    // Private data - internal details hidden from user (abstraction)
    string name;
    int ac, balance;
    int age;

    public:

    Customer(string name , int ac , int balance, int age){
        this->name = name;
        this->ac = ac;
        this->balance = balance;
        this->age = age;
       
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            
        }else{
            cout<<"invalid amount"<<endl;
        }
    }

    void updateAge(int age){
        if(age >= 0 && age < 100){
            this->age = age;
        }else{
            cout<<"invalid age"<<endl;
        }
    }

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