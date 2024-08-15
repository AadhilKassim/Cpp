#include <iostream>
using namespace std;

int main()
{ 
    int *p{}; // integer pointer
    p = new int; //Dynamic allocation of int (4bytes) in heap memory
    cout << "Value of *p before initialisation: " << *p << endl;
    *p =69; //storing a value
    cout << "Dynamically allocated memory" << endl;
    cout << "*p: " << *p << endl; // dereferencing the value
    cout << "After Allocation: " << p << endl;
    cout << "Deleting p" << endl;
    delete p; // deleting the allocated heap memory
    p=nullptr; // reinitialising null

    cout << "Value in p: " << p << endl;
    return 0;
}  