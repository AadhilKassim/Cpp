#include <iostream>
using namespace std;

int main()
{ 
    int  num1 {45}, num2 {60};
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    cout << endl;

    cout << "Comparing variables" << endl;

    cout << boolalpha;
    cout << "number 1 < number 2: " << (num1<num2) << endl;
    cout << "number 1 <= number 2: " << (num1<=num2) << endl;
    cout << "number 1 > number 2: " << (num1>num2) << endl;
    cout << "number 1 >= number 2: " << (num1>=num2) << endl;
    cout << "number 1 == number 2: " << (num1==num2) << endl;
    cout << "number 1 != number 2: " << (num1!=num2) << endl;
    return 0;
}