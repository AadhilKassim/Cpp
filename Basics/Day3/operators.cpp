#include <iostream>
using namespace std;

int main()
{ 
  int num1, num2;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  int sum = num1 + num2;
  int sub = num1 - num2;
  int mul = num1 * num2;
  int div = num1 / num2;
  int mod = num1%num2;

  cout << "Sum: " << sum << endl;
  cout << "Sub: " << sub << endl;
  cout << "Mul: " << mul << endl;
  cout << "Div: " << div << endl;
  cout << "Mod: " << mod << endl;
    return 0;
}