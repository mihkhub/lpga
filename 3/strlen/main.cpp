// Calculate the length of a string
#include <string.h>
#include <iostream>
#include <string>

int main()
{
	std::string str = "Hello, world!";
	std::cout << "string says it length is: " << str.length() << std::endl;
	std::cout << "strlen says: " << strlen(str.c_str() ) << std::endl;
	return 0;
}
