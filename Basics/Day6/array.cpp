#include <iostream>

using namespace std;

int main()
{
    int score[10];
    double arr[]{12.16,54.53,65.354,54764.45};
    for (size_t i = 0; i < 10 ; i++)
    {
        cin >> score[i];
    }
    for (size_t i = 0; i < 10 ; i++)
    {
        cout << "Score " << i << ": " << score[i]<< endl;
    }   

    for (auto value : arr)
    {
        cout << value << endl;
    }
    
    return 0;
}