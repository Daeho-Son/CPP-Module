#include "Converter.hpp"

bool is_valid_arg(int argc)
{
	if (argc != 2)
	{
		std::cerr << "Error. is_valid_arg(int argc): 한 개의 매개변수만 필요합니다." << std::endl;
		return (false);
	}
	return (true);
}

int main(int argc, char **argv)
{
	if (is_valid_arg(argc) == false)
		return (0);
	try
	{
		Converter converter1(argv[1]);
		converter1.Print();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}