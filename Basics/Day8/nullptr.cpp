#include <iostream>
using namespace std;

int main()
{
    cout << "Null Pionter Safety" << endl;

    int *p{};
    p = new int{8};

    if (!(p == nullptr))
    {
        cout << "p points to a VALID address: " << p << endl;
        cout << "p: " << p << endl;
    }
    else
        cout << "p points to INVALID address." << endl;

    delete p;
    p = nullptr;
    return 0;
}

//it is ok to delete a null pointer