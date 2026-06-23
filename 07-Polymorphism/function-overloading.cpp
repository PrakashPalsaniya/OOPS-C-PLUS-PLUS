// Topic: Function Overloading in C++ (Compile-time Polymorphism)
// Same function name but different parameters
// Compiler decides which function to call at compile time

#include<iostream>
using namespace std;

// Same function name 'add' but different parameters
int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

double add(double a, double b){
    return a + b;
}

// Same function name 'display' with different parameter types
void display(int x){
    cout << "Integer: " << x << endl;
}

void display(double x){
    cout << "Double : " << x << endl;
}

void display(string x){
    cout << "String : " << x << endl;
}

int main(){

    // Compiler automatically picks the right function
    cout << add(10, 20) << endl;           // calls add(int, int)
    cout << add(10, 20, 30) << endl;       // calls add(int, int, int)
    cout << add(1.5, 2.5) << endl;         // calls add(double, double)

    cout << endl;

    display(100);          // calls display(int)
    display(3.14);         // calls display(double)
    display("Prakash");    // calls display(string)

    return 0;
}
