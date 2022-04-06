#include "check_error.hpp"

static bool is_number_of_parameters_correct(int argc)
{
	if (argc != 4)
	{
		std::cout << "! Three parameters are required." << std::endl;
		return (false);
	}
	return (true);
}

static bool is_file_exist(char* filename)
{
	std::ifstream i_file;

	i_file.open(filename);
	if (i_file.fail())
	{
		std::cout << "! The file does not exist." << std::endl;
		return (false);
	}
	i_file.close();
	return (true);
}

bool is_parameter_valid(int argc, char** argv)
{
	if (is_number_of_parameters_correct(argc) == false)
		return (false);
	if (is_file_exist(argv[1]) == false)
		return (false);
	return (true);
}
