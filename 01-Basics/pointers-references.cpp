// Topic: Pointers and References in C++
// Pointer  - stores the memory address of a variable
// Reference - another name (alias) for an existing variable

#include<iostream>
using namespace std;

int main(){

    int num = 10;

    // Pointer - stores address of num
    int *ptr = &num;

    // Reference - alias of num
    int &ref = num;

    cout << "Value of num      : " << num << endl;
    cout << "Address of num    : " << &num << endl;
    cout << "Pointer stores    : " << ptr << endl;       // address
    cout << "Value via pointer : " << *ptr << endl;      // dereference
    cout << "Reference value   : " << ref << endl;

    // Changing value via pointer
    *ptr = 50;
    cout << "\nAfter changing via pointer:" << endl;
    cout << "num = " << num << endl;   // num is now 50
    cout << "ref = " << ref << endl;   // ref also changes (same variable)

    return 0;
}
