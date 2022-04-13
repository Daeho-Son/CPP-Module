#include "Harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << "# Debug level\n";
	harl.complain("DEBUG");
	std::cout << "\n# Info level\n";
	harl.complain("INFO");
	std::cout << "\n# Warning level\n";
	harl.complain("WARNING");
	std::cout << "\n# Error level\n";
	harl.complain("ERROR");
	std::cout << "\n# Not correct Level\n";
	harl.complain("NONE");

	return (0);
}