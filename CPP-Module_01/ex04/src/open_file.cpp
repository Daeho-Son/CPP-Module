#include "open_file.hpp"

std::ifstream open_input_file(char* filename)
{
	std::ifstream i_file;

	i_file.open(filename);
	if (i_file.fail())
	{
		std::cout << "! The file does not exist." << std::endl;
		exit(0);
	}
	return (i_file);
}

std::ofstream open_output_file(std::string filename)
{
	std::ofstream o_file;
	std::string o_filename;

	o_filename = filename + ".replace";
	o_file.open(o_filename);
	return (o_file);
}