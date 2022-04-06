#include "ft_replace.hpp"

static std::string replace_old_word_to_new_word(std::string str, std::string old_word, std::string new_word)
{
	std::string::size_type n = 0;
	std::string new_string = "";
	std::string prev_string = "";
	std::string next_string = "";

	for (int i = 0; i < static_cast<int>(str.size()); i++)
	{
		n = str.find(old_word, i);
		if (i == 0 && n == std::string::npos)
			return (str);
		if (n != std::string::npos)
		{
			prev_string = str.substr(0, n);
			next_string = str.substr(n + old_word.size(), str.size());
			new_string = prev_string + new_word + next_string;
			str = new_string;
			i = prev_string.size() + new_word.size() - 1;
		}
	}
	return (new_string);
}

void ft_replace(std::string filename, std::string old_word, std::string new_word)
{
	std::ifstream i_file;
	std::ofstream o_file;
	std::string read_string;
	std::string replaced_string;

	i_file.open(filename);
	o_file.open(filename + ".replace");
	while (!i_file.eof())
	{
		getline(i_file, read_string);
		replaced_string = replace_old_word_to_new_word(read_string, old_word, new_word);
		o_file << replaced_string << std::endl;
	}
	i_file.close();
	o_file.close();
}