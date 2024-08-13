#include <iostream>
using namespace std;

int main()
{ 
    size_t COUNT {10}, i{};
    //Do While loop runs 1 time before it checks the condition
    do
    {
        cout << i+1 << ". I Love C++" << endl;
        i++; //Iteration Updation
    } while (i<COUNT); //Condition
    cout << "Loop is done" << endl;
    return 0;
}