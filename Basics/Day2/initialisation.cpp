#include <iostream>
using namespace std;

int main()
{   //Braced Initalisation
    int a {15}; //Decimal

    //Functional Initialisation
    int b (017); // Octal

    //Assignment initialisation
    int c = 0x0f; // Hexadecimal


    cout << "Number: " << a << endl; //Outputs 15
    cout << "Number: " << b << endl; //Outputs 15
    cout << "Number: " << c << endl; //Outputs 15
    return 0;
}