// Topic: Variables and Data Types in C++
// Variables store data in memory. Each variable has a type.

#include<iostream>
using namespace std;

int main(){

    // Integer - whole numbers
    int age = 22;

    // Float - decimal numbers (single precision)
    float marks = 89.5;

    // Double - decimal numbers (double precision)
    double pi = 3.14159265;

    // Character - single character
    char grade = 'A';

    // Boolean - true or false
    bool isPassed = true;

    // String - sequence of characters
    string name = "Prakash";

    // Print all values
    cout << "Name    : " << name << endl;
    cout << "Age     : " << age << endl;
    cout << "Marks   : " << marks << endl;
    cout << "Pi      : " << pi << endl;
    cout << "Grade   : " << grade << endl;
    cout << "Passed  : " << isPassed << endl;

    return 0;
}
