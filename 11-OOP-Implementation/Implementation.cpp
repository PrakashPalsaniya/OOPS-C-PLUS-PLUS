// Topic: OOP Implementation - Class and Object basics
// A class groups related data (members) and functions (methods) together
// Objects are real-world instances created from the class blueprint

#include<iostream>
using namespace std;

class Student
{   
    public:
    // Public data members - properties of a Student
    string name;
    int age , roll_number;
    string grade;
};

int main(){
    // Creating first Student object
    Student S1;
    S1.name        = "Prashant";
    S1.age         = 22;
    S1.roll_number = 23;
    S1.grade       = "A";

    cout<<S1.age<<" ";

    // Creating second Student object
    Student S2;
    S2.name        = "Jp";
    S2.age         = 22;
    S2.roll_number = 24;
    S2.grade       = "A+";

    cout<<S2.age<<" ";
}