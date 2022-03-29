#include "megaphone.hpp"

int main(int argc, char **argv)
{
	char *str;

	if (argc == 1)
		std::cout << "Parameters are required." << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			for (int j = 0; str[j]; j++)
				std::cout << static_cast<char>(std::toupper(str[j]));
		}
		std::cout << std::endl;
	}
	return (0);
}
