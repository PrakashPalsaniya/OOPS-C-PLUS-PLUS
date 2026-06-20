// Topic: Stack vs Heap Memory in C++
// Stack - memory for local variables, managed automatically
// Heap  - dynamic memory, managed manually using new/delete

#include<iostream>
using namespace std;

int main(){

    // Stack memory - automatic, fast, limited size
    int a = 10;         // stored on stack
    cout << "Stack variable a = " << a << endl;

    // Heap memory - dynamic, slower, large size
    int *ptr = new int;   // allocate memory on heap
    *ptr = 99;
    cout << "Heap variable = " << *ptr << endl;

    // Always free heap memory to avoid memory leak
    delete ptr;
    ptr = nullptr;        // set to null after delete (good practice)

    // Dynamic array on heap
    int size = 5;
    int *arr = new int[size];

    // Assign values
    for(int i = 0; i < size; i++){
        arr[i] = (i + 1) * 10;
    }

    cout << "Heap array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the array from heap
    delete[] arr;

    return 0;
}
