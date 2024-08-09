#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    int a = 15; //Decimal
    int b = 017; // Octal
    int c = 0x0f; // Hexadecimal
    int d = 0b00001111; // Binary

    cout << "Number: " << a << endl; //Outputs 15
    cout << "Number: " << b << endl; //Outputs 15
    cout << "Number: " << c << endl; //Outputs 15
    cout << "Number: " << d << endl; //Outputs 15
    return 0;
}