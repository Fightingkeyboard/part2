#include "funcs.h"
#include <iostream>
#include <string>

int main(){
	std::cout << indent() << std::endl;
	std::cout << removeLeadingSpaces("       int x = 1;  ") << std::endl;
	std::cout << countChar("I LIIIKE CHcken", 'I') << std::endl;
	return 0;
}
