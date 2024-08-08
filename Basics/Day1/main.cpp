//This brings in the iostream file

#include <iostream>
#include <string>
using namespace std;

int main()
{ string name;
int age;
cout << "enter your name: ";
getline(cin,name);
cin >> age;
cout << "Hello " << name << " you are " << age << " years old!" << endl;
    return 0;
}