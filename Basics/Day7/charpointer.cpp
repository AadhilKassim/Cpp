#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const char *p{"Hello my people"};
    cout << "Message: " << p << endl; //pointer prints saved data (address or as in here a string)
    cout << "Message: " << *p << endl; // pointer prints the first value (for a variable its the starting memmory location adress) (here it's 'H')
    return 0;
}