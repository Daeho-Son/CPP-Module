#include "PhoneBook.hpp"

void ft_exit()
{
	std::cout << "EXIT" << std::endl;
	exit(0);
}

void ft_add(PhoneBook& phonebook)
{
	t_user_data user_data;

	std::cout << "ADD" << std::endl;
	std::cout << "Input first name: ";
	std::cin >> user_data.first_name;
	std::cout << "Input last name: ";
	std::cin >> user_data.last_name;
	std::cout << "Input nickname: ";
	std::cin >> user_data.nickname;
	std::cout << "Input phone number: ";
	std::cin >> user_data.phone_number;
	std::cout << "Input darkest secret: ";
	std::cin >> user_data.darkest_secret;
	phonebook.AddUser(user_data);
}

void ft_search(PhoneBook& phonebook)
{
	int search_number;

	std::cout << "SEARCH" << std::endl;
	phonebook.ShowAllUserData();
	std::cout << "Search number: ";
	std::cin >> search_number;
	phonebook.ShowUserData(search_number);
}

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while (1)
	{
		std::cin >> command;

		if (command == "EXIT" || command == "Exit" || command == "exit")
			ft_exit();
		else if (command == "ADD" || command == "Add" || command == "add")
			ft_add(phonebook);
		else if (command == "SEARCH" || command == "Search" || command == "search")
			ft_search(phonebook);
	}
	return (0);
}
