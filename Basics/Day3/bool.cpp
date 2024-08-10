#include <iostream>
using namespace std;

int main()
{ //Declared boolean type variables
   bool rlight {true};
   bool glight {false};

   if(rlight == true) // Checks if state equal to true 
   {
    cout << "Stop!" << endl; //Here this line will run
   }
   else
   {
    cout << "Go!" << endl;
   }

    if (glight) //When no condition is specified, variable is evaluated with true
   {
    cout << "Go!" << endl;
   }
   else
   {
    cout << "Stop!" << endl; //Here thisline will run
   }


    return 0;
}