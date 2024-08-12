#include <iostream>
using namespace std;

int main()
{ 
    int number1 {75};
    int number2 {60};
    bool result = (number1 < number2);//Expression yielding the condition
    
	
	 cout <<  boolalpha << "result : " << result <<  endl; 
	
	 cout <<  endl;
	 cout << "free standing if statement" <<  endl;
   
    //if(result){
	if(result == true){
         cout << number1 << " is less than " << number2 <<  endl;
    }
    
    //if(!result){
	if(!(result == true)){
         cout << number1 << " is NOT less than " << number2 <<  endl;
    }




   	//Using else
	 cout <<  endl;
	 cout << "using the else clause : " <<  endl;
	
	if(result == true){
         cout << number1 << " is less than " << number2 <<  endl;
    }else{
         cout << number1 << " is NOT less than " << number2 <<  endl;
    }


    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop{true};
    
     cout <<  endl;
	  cout << "Police officer stops(less verbose)" <<  endl;
	 if(green && !police_stop){
          cout << "Go" <<  endl;
     }else{
          cout << "Stop" <<  endl;
     }

    return 0;
}