#include "main.hpp"

int main(void)
{
	Harl harl;
	int level;

	while (1)
	{
		std::cout << "Enter the level. (1 ~ 4): ";
		std::cin >> level;
		std::cin.clear();
		std::cin.ignore(100, '\n');
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "The eof signal has been entered." << std::endl;
			exit(0);
		}
		if (1 <= level && level <= 4)
			break;
		std::cout << "! Invalid number." << std::endl << std::endl;
	}
	harl.complain(std::to_string(level - 1));
	return (0);
}