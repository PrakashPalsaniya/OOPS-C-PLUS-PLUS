// Topic: Getter and Setter methods (Encapsulation)
// Getters - public functions to READ private data
// Setters - public functions to WRITE/UPDATE private data
// This way we control how private data is accessed and modified

#include<iostream>
using namespace std;

class Student {

    private:
    // Private data - cannot be accessed directly from outside
    string name;
    int age;
    float marks;

    public:
    // Setter for name
    void setName(string name){
        this->name = name;
    }

    // Getter for name
    string getName(){
        return name;
    }

    // Setter for age - with validation
    void setAge(int age){
        if(age > 0 && age < 100){
            this->age = age;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Getter for age
    int getAge(){
        return age;
    }

    // Setter for marks - with validation
    void setMarks(float marks){
        if(marks >= 0 && marks <= 100){
            this->marks = marks;
        } else {
            cout << "Marks should be between 0 and 100!" << endl;
        }
    }

    // Getter for marks
    float getMarks(){
        return marks;
    }

    void display(){
        cout << "Name  : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main(){

    Student S1;

    // Using setters to set values
    S1.setName("Prakash");
    S1.setAge(20);
    S1.setMarks(92.5);
    S1.display();

    cout << endl;

    // Trying invalid values - setter will reject them
    S1.setAge(-5);        // Invalid
    S1.setMarks(110);     // Invalid

    // Using getters to read values
    cout << "Student name : " << S1.getName() << endl;
    cout << "Student age  : " << S1.getAge() << endl;

    return 0;
}
