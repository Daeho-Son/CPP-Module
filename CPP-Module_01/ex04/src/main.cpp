#include "main.hpp"

int main(int argc, char** argv)
{
	if (is_parameter_valid(argc, argv) == false)
		return (0);
	ft_replace(argv[1], argv[2], argv[3]);
	return (0);
}