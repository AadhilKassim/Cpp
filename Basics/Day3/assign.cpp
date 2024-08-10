#include <iostream>
using namespace std;

int main()
{ 
   int var1{123}; // Declare and initialize
   cout << "var1: " << var1 << endl;

   var1 = 55; //Assign
   cout << "var1: " << var1 << endl;
   //This method works with almost any type variable

   //Auto type deduction
   auto var2 {333u}; // Declaration and initialize with type deduction
   //'u' denotes unsigned variable (int)

   var2 = -22; //Compiles finishes, has garbage value stored [unsigned to save the execution]
   cout << "var2: " << var2 << endl;
    return 0;
}