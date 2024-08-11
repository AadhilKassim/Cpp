#include <iostream>
using namespace std;

int main()
{ 
    bool a{true} , b{false}, c{true};
    cout << boolalpha;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

//AND Operator
cout << endl;
cout << "Basic AND Operations" << endl;

cout << "a && b: " << (a&&b) << endl; //false
cout << "a && c: " << (a&&c) << endl; // true
cout << "a && b && c: " << (a&&b&&c) << endl; // false

//Or Operator
cout << endl;
cout << "Basic OR Operations" << endl;

cout << "a || b: " << (a||b) << endl; //true
cout << "a || c: " << (a||c) << endl; // true
cout << "a || b || c: " << (a||b||c) << endl; //true
  
  
//NOT Operator
cout << endl;
cout << "Basic NOT Operations" << endl;

cout << "!a: " << (!a) << endl; //false
cout << "!b: " << (!b) << endl; // true
cout << "!c: " << (!c) << endl; //false
    
    return 0;
}