#include "main.hpp"

static bool is_parameter_valid(int argc)
{
	if (argc != 4)
	{
		std::cout << "! Three parameters are required." << std::endl;
		return (false);
	}
	return (true);
}

std::string replace_old_word_to_new_word(std::string old_string, std::string old_word, std::string new_word)
{
	std::string new_string = "";
	std::string::size_type n = 0;
	std::string prev_string = "";
	std::string next_string = "";

	for (int i = 0; i < static_cast<int>(old_string.size()); i++)
	{
		n = old_string.find(old_word, i);
		if (n != std::string::npos)
		{
			std::cout << "old_string: " << old_string << std::endl;
			prev_string = old_string.substr(0, n);
			std::cout << "prev_string: " << prev_string << std::endl;
			next_string = old_string.substr(n + old_word.size(), old_string.size());
			std::cout << "next_sting: " << next_string << std::endl;
			new_string = prev_string + new_word + next_string;
			std::cout << "new_string: " << new_string << std::endl;
			old_string = new_string;
			i = prev_string.size() + new_word.size() - 1;
			std::cout << "----------" << std::endl;
		}
	}
	return (new_string);
}

int main(int argc, char** argv)
{
	std::ifstream i_file;
	std::ofstream o_file;
	std::string old_word;
	std::string new_word;
	std::string read_string;
	std::string replaced_string;

	if (is_parameter_valid(argc) == false)
		return (0);
	old_word = argv[2];
	new_word = argv[3];
	i_file = open_input_file(argv[1]);
	o_file = open_output_file(argv[1]);
	while (!i_file.eof())
	{
		getline(i_file, read_string);
		replaced_string = replace_old_word_to_new_word(read_string, old_word, new_word);
		o_file << replaced_string << std::endl;
		std::cout << std::endl;
	}
	i_file.close();
	o_file.close();
	return (0);
}