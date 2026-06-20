// Topic: Functions in C++
// A function is a block of code that performs a specific task.
// Helps in code reuse and better organization.

#include<iostream>
using namespace std;

// Function with no return value (void)
void greet(){
    cout << "Hello! Welcome to C++ OOP." << endl;
}

// Function with parameters and return value
int add(int a, int b){
    return a + b;
}

// Function with reference parameter (changes original value)
void increment(int &n){
    n++;   // modifies the original variable
}

// Function with pointer parameter
void doubleValue(int *ptr){
    *ptr = *ptr * 2;
}

int main(){

    // Calling void function
    greet();

    // Calling function with return value
    int result = add(10, 20);
    cout << "Sum = " << result << endl;

    // Call by reference
    int x = 5;
    increment(x);
    cout << "After increment: x = " << x << endl;   // x is now 6

    // Call by pointer
    int y = 8;
    doubleValue(&y);
    cout << "After doubling: y = " << y << endl;    // y is now 16

    return 0;
}
