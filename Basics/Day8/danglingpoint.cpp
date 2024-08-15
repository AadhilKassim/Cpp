#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    int *p;
   /* cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;//program stops here
    cout << "All is well" << endl;*/
    delete p;
    p=nullptr;

    p={new int {70}};
    cout << "p before delete: " << *p << endl; //GOOD : prints 7-
    delete p;
    cout << "p after delete: " << *p << endl; // BAD : prints junk
    
    p = new int {60};
    int *p1 {p};
    cout << "p: " << p << " *p: " << *p << endl;
    cout << "p1: " << p1 << " *p1: " << *p1 << endl;

    delete p;
    //BAD : Undefined behaviour as p1 points to deleted memory
    cout << "p1 (after p deletion): " << p1 << " - " << *p1 << endl; //prints junk address and data
    
    cout << "All is well" << endl;

    return 0;
}