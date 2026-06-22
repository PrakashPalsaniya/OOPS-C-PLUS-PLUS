// Topic: Single Inheritance in C++
// One child class inherits from one parent class
// Syntax: class Child : accessSpecifier Parent { };

#include<iostream>
using namespace std;

// Parent class (Base class)
class Animal {
    public:
    string name;

    void eat(){
        cout << name << " is eating." << endl;
    }

    void sleep(){
        cout << name << " is sleeping." << endl;
    }
};

// Child class (Derived class) - inherits from Animal
class Dog : public Animal {
    public:
    // Dog has its own behavior + Animal's behavior
    void bark(){
        cout << name << " is barking." << endl;
    }
};

int main(){

    Dog d;
    d.name = "Bruno";

    // Inherited from Animal
    d.eat();
    d.sleep();

    // Own method of Dog
    d.bark();

    return 0;
}
