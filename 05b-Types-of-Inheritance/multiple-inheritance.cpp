// Topic: Multiple Inheritance in C++
// One child class inherits from MORE than one parent class
// Syntax: class Child : public Parent1, public Parent2 { };

#include<iostream>
using namespace std;

// Parent class 1
class Father {
    public:
    void property(){
        cout << "Father's property inherited." << endl;
    }
};

// Parent class 2
class Mother {
    public:
    void cooking(){
        cout << "Mother's cooking skills inherited." << endl;
    }
};

// Child class inherits from both Father and Mother
class Child : public Father, public Mother {
    public:
    void study(){
        cout << "Child is studying." << endl;
    }
};

int main(){

    Child c;

    // Inherited from Father
    c.property();

    // Inherited from Mother
    c.cooking();

    // Own method
    c.study();

    return 0;
}
