#include <iostream>
using namespace std;

int main()
{ 
    int var{96};
    int *p {&var}; //will initalise with nullpointer
    double *p1 {};
    cout << p << endl; //
    cout << p1 <<endl;
    cout << "Size of (int): " << sizeof(int*) << endl;
    cout << "Size of (p): " << sizeof(p) << endl; //8 bytes
    cout << "Size of (p1): " << sizeof(p1) << endl; //8 bytes
    //cant save a different type's address into an int type and vice versa
    cout <<"Value of which the address is stored in the pointer: " << *p << endl;
    return 0;
}