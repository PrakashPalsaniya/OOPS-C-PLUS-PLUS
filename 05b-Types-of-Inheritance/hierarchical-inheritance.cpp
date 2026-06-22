// Topic: Hierarchical Inheritance in C++
// Multiple child classes inherit from ONE parent class
//         Animal
//        /      \
//      Dog      Cat

#include<iostream>
using namespace std;

// One Parent class
class Animal {
    public:
    void eat(){
        cout << "Animal is eating." << endl;
    }

    void sleep(){
        cout << "Animal is sleeping." << endl;
    }
};

// Child 1 - inherits from Animal
class Dog : public Animal {
    public:
    void bark(){
        cout << "Dog is barking." << endl;
    }
};

// Child 2 - also inherits from Animal
class Cat : public Animal {
    public:
    void meow(){
        cout << "Cat is meowing." << endl;
    }
};

// Child 3 - also inherits from Animal
class Cow : public Animal {
    public:
    void moo(){
        cout << "Cow is mooing." << endl;
    }
};

int main(){

    Dog d;
    d.eat();    // from Animal
    d.bark();   // own method

    cout << endl;

    Cat c;
    c.sleep();  // from Animal
    c.meow();   // own method

    cout << endl;

    Cow cow;
    cow.eat();  // from Animal
    cow.moo();  // own method

    return 0;
}
