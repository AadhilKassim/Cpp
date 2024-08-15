#include <iostream>
using namespace std;

int main(){
 /*   try
    {
        int *data {new int[100000000000]};
    }
    catch(const std::exception& ex)
    {
        cout <<"Somethimg went wrong! " << ex.what() << endl;
        
    }*/
    
    for (size_t i = 0; i < 100; i++)
    {
        int *data = new (nothrow) int [100000000];

        if(data!=nullptr)
            cout << "Data allocated" << endl;
        else
            cout << "Data allocation failed" << endl;
    }
    



    cout << "All is well" << endl;
    return 0;
}