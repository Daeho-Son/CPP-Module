#include "main.hpp"

int main(int argc, char** argv)
{
	std::string filename;
	std::string old_word;
	std::string new_word;

	if (is_parameter_valid(argc, argv) == false)
		return (0);
	filename = argv[1];
	old_word = argv[2];
	new_word = argv[3];
	ft_replace(filename, old_word, new_word);
	return (0);
}