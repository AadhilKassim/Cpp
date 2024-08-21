#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maximum(T a, T b);

template <>
const char *maximum<const char *>(const char *a, const char *b);

int main()
{
    int a{4}, b{5};
    double c{334.34}, d{34.5};
    const char *e{"Fuiyoh!"};
    const char *f{"Haiyya!"};
    cout << "Maximum: " << maximum(a, b) << endl;
    cout << "Maximum: " << maximum(c, d) << endl;
    cout << "Maximum: " << maximum(e, f) << endl;
    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    return (strcmp(a, b) > 0) ? a : b;
}