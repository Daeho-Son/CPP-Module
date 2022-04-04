# include <iostream>

void print_upper_string(int argc, char** argv)
{
	char *str;

	for (int i = 1; i < argc; i++)
	{
		str = argv[i];
		for (int j = 0; str[j]; j++)
			std::cout << static_cast<char>(std::toupper(str[j]));
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		print_upper_string(argc, argv);
	return (0);
}
