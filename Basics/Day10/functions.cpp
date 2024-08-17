#include <iostream>
using namespace std;
void age_kyc(int);
int max(int,int);
int main()
{ 
   // int age;
   // cout << "How old are you: ";
    //cin>> age;
    //age_kyc(age);

    /*for (size_t i = 0; i < 20; i++)
    {
        age_kyc(i);
    }*/
   int a, b;
   cout << "Enter two numbers: ";
   cin >> a >> b;
   int maximum=max(a,b);
   cout << "The larger number is: " << maximum << endl;
    return 0;
}

void age_kyc(int age)
{
    if (age>=18)
    {
        cout << "You are " << age << " years old! Welcome." <<endl;
    }
    else if ((age<18) && (age > 0))
    {
        cout << "Sorry you are too young. Please move out of the line." << endl;
    }
    else    
    {
        cout << "Invalid data!!!!!!" << endl << "Please enter correct age" << endl;
    }
    
}

int max(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
       
}

//Function need not neccessarily have an argument and take in data.
//Updates to values taken into a function do not reflect in the actuall value stored in the variable