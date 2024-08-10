#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
   float a {1.945678652135487786512f}; //Precision 7
   double b {1.48756545651211545622}; //Precision 12
  long double c {1.45223878897464324544488544L}; //Precision 16

  cout << setprecision(20);
  cout << a << endl <<b << endl << c <<endl;

    return 0;
}