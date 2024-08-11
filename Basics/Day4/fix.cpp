#include <iostream>
using namespace std;

int main()
{ 
  int value {99};

  //Prefix
 // increment
  ++value; //100
  cout << "Value: " << value << endl;

  value =99;
  cout << "Value: " << ++value << endl; //100

  //decrement
  value =99;
  --value; //98
  cout << "Value: " << value << endl;

  value =99;
  cout << "Value: " << --value << endl; // 98

  //Postfix
 // increment
 value=99;
  value++; //100
  cout << "Value: " << value << endl;

  value =99;
  cout << "Value: " << value++ << endl; //99
  cout << "Value: " << value << endl; //100

  //decrement
  value =99;
  value--; //98
  cout << "Value: " << value << endl;

  value =99;
  cout << "Value: " << value-- << endl; // 99
  cout << "Value: " << value << endl; //98

    return 0;
}