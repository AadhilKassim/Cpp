#include <iostream>

using namespace std;

int main()
{
    size_t size{10};

    double *psal{new double[size]};
    int *pstud{new (nothrow) int[size]{}};
    double *pscore{new (nothrow) double[size]{9, 8, 7, 6, 5, 4}};
    if (pscore)
    {
        cout << "Size of score: " << sizeof(pscore) << endl;
        cout << "Successfully allocated memory" << endl;

        for (size_t i = 0; i < size; i++)
        {
            cout << "Value: " << pscore[i] << ": " << *(pscore + i) << endl;
            // *(pscore + i) is same as pscore[i]
        }
    }
    delete[] psal;
    psal = nullptr;
    delete[] pstud;
    pstud = nullptr;
    delete[] pscore;
    pscore = nullptr;

    return 0;
}