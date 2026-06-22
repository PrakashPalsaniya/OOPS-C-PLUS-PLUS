// Topic: Multilevel Inheritance in C++
// Chain of inheritance: A -> B -> C
// Class C inherits from B, which inherits from A

#include<iostream>
using namespace std;

// Level 1 - Base class
class Animal {
    public:
    void eat(){
        cout << "Animal is eating." << endl;
    }
};

// Level 2 - Inherits from Animal
class Dog : public Animal {
    public:
    void bark(){
        cout << "Dog is barking." << endl;
    }
};

// Level 3 - Inherits from Dog (also gets Animal's properties)
class BabyDog : public Dog {
    public:
    void weep(){
        cout << "Baby Dog is weeping." << endl;
    }
};

int main(){

    BabyDog bd;

    // BabyDog can access all three levels
    bd.eat();    // from Animal (Level 1)
    bd.bark();   // from Dog (Level 2)
    bd.weep();   // own method (Level 3)

    return 0;
}
