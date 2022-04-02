#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "str의 메모리 주소: " << &string << std::endl;
	std::cout << "stringPTR의 메모리 주소: " << stringPTR << std::endl;
	std::cout << "stringREF의 메모리 주소: " << &stringREF << std::endl << std::endl;

	std::cout << "string의 값: " << string << std::endl;
	std::cout << "stringPTR의 값: " << *stringPTR << std::endl;
	std::cout << "stringREF의 값: " << stringREF << std::endl;
	return (0);
}