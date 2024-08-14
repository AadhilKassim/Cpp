#include <iostream>
using namespace std;

int main()
{ 
    int var{};
    int *p {&var}; //will initalise with nullpointer
    double *p1 {};
    cout << p << endl; //
    cout << p1 <<endl;
    cout << "Size of (int): " << sizeof(int*) << endl;
    cout << "Size of (p): " << sizeof(p) << endl;
    
    return 0;
}