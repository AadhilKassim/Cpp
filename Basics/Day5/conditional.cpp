#include <iostream>


int main(){

	int max{};
    
    int a{35};
    int b{200};
	
    std::cout << std::endl;
	std::cout << "using regular if " << std::endl;

    max = (a > b)? a : b; // Ternary operator
	
    std::cout << "max : " << max << std::endl;
	
   
    return 0;
}