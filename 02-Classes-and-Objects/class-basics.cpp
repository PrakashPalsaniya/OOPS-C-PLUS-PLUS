// Topic: Class and Object basics in C++
// Class  - blueprint/template that defines properties and behaviors
// Object - real instance created from a class

#include<iostream>
using namespace std;

// Defining a class
class Student {

    public:
    // Data members (properties)
    string name;
    int age;
    int rollNumber;
    string grade;

    // Member function (behavior)
    void display(){
        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Grade       : " << grade << endl;
        cout << "-------------------" << endl;
    }
};

int main(){

    // Creating objects of class Student
    Student S1;
    S1.name       = "Prakash";
    S1.age        = 20;
    S1.rollNumber = 101;
    S1.grade      = "A";
    S1.display();

    Student S2;
    S2.name       = "Rohit";
    S2.age        = 21;
    S2.rollNumber = 102;
    S2.grade      = "B+";
    S2.display();

    return 0;
}
