#include <iostream>
#include <string>
using namespace std;

int Sum(int,int); 

int main()
{ int num1, num2;
cout << "Enter two numbers with a space: ";
cin >> num1 >> num2;
int sum = num1 + num2;
cout << "Sum: " << sum << endl;

sum = Sum(num1,num2);
cout << "Sum from the fuction is: " << sum << endl;
    return 0;
}

int Sum(int a, int b)
{
    int result = a + b;
    return result;
}