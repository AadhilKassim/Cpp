#include <iostream>
using namespace std;

//same name different parameter
int max(int,int); 
double max(double,double);

int main()
{ 
    int x{4},y{8};
    cout << "Larger number is: " << max(x,y) << endl;

    double a{90.345}, b{238.976};
    cout << "Larger number is: " << max(a,b) << endl;
    return 0;
}

int max(int a, int b)
{
    return (a>b)? a:b;
}

double max(double a, double b)
{
    return (a>b)? a:b;
}