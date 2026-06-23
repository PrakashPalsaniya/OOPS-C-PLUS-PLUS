// Topic: Virtual Functions in C++ (Runtime Polymorphism)
// virtual keyword tells compiler to decide which function to call at RUNTIME
// Based on the actual object type, not the pointer type

#include<iostream>
using namespace std;

// Base class
class Animal {
    public:
    // virtual function - can be overridden by child class
    virtual void sound(){
        cout << "Animal makes a sound." << endl;
    }

    void eat(){
        cout << "Animal is eating." << endl;
    }
};

// Child class 1
class Dog : public Animal {
    public:
    // Overriding the virtual function
    void sound() override {
        cout << "Dog says: Woof!" << endl;
    }
};

// Child class 2
class Cat : public Animal {
    public:
    void sound() override {
        cout << "Cat says: Meow!" << endl;
    }
};

// Child class 3
class Cow : public Animal {
    public:
    void sound() override {
        cout << "Cow says: Moo!" << endl;
    }
};

int main(){

    // Base class pointer pointing to different child objects
    Animal *ptr;

    Dog d;
    Cat c;
    Cow cow;

    // Runtime polymorphism - function called depends on actual object
    ptr = &d;
    ptr->sound();   // calls Dog's sound()

    ptr = &c;
    ptr->sound();   // calls Cat's sound()

    ptr = &cow;
    ptr->sound();   // calls Cow's sound()

    return 0;
}
