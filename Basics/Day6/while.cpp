#include <iostream>
using namespace std;

int main()
{ 
    size_t COUNT{10}, i{}; //iterator declaration is outside the loop
    
    while (i<COUNT) //Condition
    {
        cout << i+1 << ". I Love C++" << endl;
        i++; //Iterator Updation
    }
    cout << "Loop is done" << endl;

    return 0;
}