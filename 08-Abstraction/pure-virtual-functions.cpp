// Topic: Pure Virtual Functions and Abstract Class in C++
// Abstract class  - a class that has at least one pure virtual function
// Pure virtual    - declared with '= 0', has no body in base class
// We CANNOT create object of an abstract class
// Every child class MUST implement the pure virtual function

#include<iostream>
using namespace std;

// Abstract class - has a pure virtual function
class Shape {

    public:
    // Pure virtual function - no implementation here
    // Child classes must implement this
    virtual float area() = 0;
    virtual float perimeter() = 0;

    // Regular function (non-virtual, same for all shapes)
    void display(){
        cout << "Area      : " << area() << endl;
        cout << "Perimeter : " << perimeter() << endl;
    }
};

// Child class 1 - must implement area() and perimeter()
class Circle : public Shape {
    private:
    float radius;

    public:
    Circle(float r){
        radius = r;
    }

    // Implementing pure virtual functions
    float area() override {
        return 3.14 * radius * radius;
    }

    float perimeter() override {
        return 2 * 3.14 * radius;
    }
};

// Child class 2
class Rectangle : public Shape {
    private:
    float length, width;

    public:
    Rectangle(float l, float w){
        length = l;
        width  = w;
    }

    float area() override {
        return length * width;
    }

    float perimeter() override {
        return 2 * (length + width);
    }
};

int main(){

    // Shape s;  // ERROR: cannot create object of abstract class

    Circle c(7);
    cout << "Circle:" << endl;
    c.display();

    cout << endl;

    Rectangle r(5, 3);
    cout << "Rectangle:" << endl;
    r.display();

    return 0;
}
