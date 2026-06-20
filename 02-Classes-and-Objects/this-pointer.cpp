// Topic: this pointer in C++
// 'this' is a special pointer that points to the current object
// Used when parameter name and data member name are the same

#include<iostream>
using namespace std;

class Student {

    private:
    string name;
    int age;
    int rollNumber;

    public:
    // Using 'this' pointer to resolve naming conflict
    Student(string name, int age, int rollNumber){
        this->name       = name;        // this->name is data member, name is parameter
        this->age        = age;
        this->rollNumber = rollNumber;
    }

    void display(){
        cout << "Name        : " << this->name << endl;
        cout << "Age         : " << this->age << endl;
        cout << "Roll Number : " << this->rollNumber << endl;
    }

    // Returning current object using this pointer
    Student& setName(string name){
        this->name = name;
        return *this;    // returns current object
    }
};

int main(){

    Student S1("Prakash", 20, 101);
    S1.display();

    cout << "\nAfter updating name:" << endl;

    // Method chaining using this pointer
    S1.setName("Prakash Palsaniya");
    S1.display();

    return 0;
}
