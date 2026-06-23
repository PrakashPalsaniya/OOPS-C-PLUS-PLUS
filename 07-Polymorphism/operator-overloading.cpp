// Topic: Operator Overloading in C++ (Compile-time Polymorphism)
// We can redefine how operators (+, -, *, etc.) work for our class
// Syntax: returnType operator symbol (parameters) { }

#include<iostream>
using namespace std;

class Complex {

    public:
    int real;
    int imaginary;

    // Constructor to set values
    Complex(int r, int i){
        real      = r;
        imaginary = i;
    }

    // Overloading + operator to add two Complex numbers
    Complex operator+(Complex c){
        Complex temp(0, 0);
        temp.real      = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }

    // Overloading - operator to subtract Complex numbers
    Complex operator-(Complex c){
        Complex temp(0, 0);
        temp.real      = real - c.real;
        temp.imaginary = imaginary - c.imaginary;
        return temp;
    }

    void display(){
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main(){

    Complex c1(3, 4);   // 3 + 4i
    Complex c2(1, 2);   // 1 + 2i

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();

    // Using overloaded + operator
    Complex c3 = c1 + c2;
    cout << "\nc1 + c2 = "; c3.display();

    // Using overloaded - operator
    Complex c4 = c1 - c2;
    cout << "c1 - c2 = "; c4.display();

    return 0;
}
