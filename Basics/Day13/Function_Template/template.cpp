#include <iostream>
using namespace std;
template <typename T>
T maximum(T a, T b);
int main()
{
    int a{4}, b{5};
    double c{334.34}, d{34.5};
    cout << "Maximum: " << maximum(a, b) << endl;
    cout << "Maximum: " << maximum(c, d) << endl;
    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}