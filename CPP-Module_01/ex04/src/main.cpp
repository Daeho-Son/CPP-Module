#include "../include/main.hpp"

bool is_parameter_error(int argc, char** argv)
{
	std::string filename;
	std::ifstream ifs;

	if (argc != 4)
	{
		std::cout << "! Three parameters are required." << std::endl;
		return (false);
	}
	filename = argv[1];
	ifs.open(filename);
	if (ifs.fail())
	{
		std::cout << "The file does not exist." << std::endl;
		return (false);
	}
	return (true);
}

int main(int argc, char** argv)
{
	std::ifstream input_file;
	std::string filename;
	std::string read_string;

	if (is_parameter_error(argc, argv) == false)
		exit(0);
	filename = argv[1];
	input_file.open(filename);
	while (!input_file.eof())
	{
		getline(input_file, read_string);
		std::cout << read_string << std::endl;
	}
	return (0);
}