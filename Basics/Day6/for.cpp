#include <iostream>
using namespace std;

int main()
{ //Scope of iterator when declared in a loop is inside the loop
//For wider scope declare the iterator variable outside the loop
    for (size_t i {}; i < 10000; i++)
    {
        cout << i+1 << ". I love C++" << endl;
    }
    cout << "Loop is done" << endl;
    return 0;
}