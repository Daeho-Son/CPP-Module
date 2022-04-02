#include "PhoneBook.hpp"

static Contact input_data_and_get_contact()
{
	Contact contact;
	std::string str;

	std::cout << "Enter the first name: ";
	getline(std::cin, str);
	contact.SetFirstName(str);
	std::cout << "Enter the last name: ";
	getline(std::cin, str);
	contact.SetLastName(str);
	std::cout << "Enter the nickname: ";
	getline(std::cin, str);
	contact.SetNickName(str);
	do
	{
		std::cout << "Enter the phone number: ";
		getline(std::cin, str);
		if (str == "")
			std::cout << "! Please enter your number." << std::endl << std::endl;
	} while (str == "");
	contact.SetPhoneNumber(str);
	std::cout << "Enter the darkest secret: ";
	getline(std::cin, str);
	contact.SetDarkestSecret(str);
	return (contact);
}

static void add_contact(PhoneBook& phonebook)
{
	Contact contact = input_data_and_get_contact();
	phonebook.AddContact(contact);
}

static void search_contact(PhoneBook& phonebook)
{
	int search_number;

	phonebook.ShowAllContact();
	while (1)
	{
		std::cout << "Enter the user ID. (or Enter -1 if you want to leave.)";
		std::cout << std::endl << "=> ";
		std::cin >> search_number;
		std::cin.clear();
		std::cin.ignore(100, '\n');
		if (0 < search_number && search_number <= phonebook.GetUserCount())
			break;
		if (search_number == -1)
			return;
		std::cout << "! Please enter a valid number. " << std::endl << std::endl;
	}
	phonebook.ShowContactIncludingSecret(search_number - 1);
}

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while (1)
	{
		std::cout << "Enter the command. (EXIT, ADD, SEARCH)" << std::endl;
		std::cout << "=> ";
		getline(std::cin, command);
		if (command == "EXIT" || command == "Exit" || command == "exit")
			return (0);
		else if (command == "ADD" || command == "Add" || command == "add")
			add_contact(phonebook);
		else if (command == "SEARCH" || command == "Search" || command == "search")
			search_contact(phonebook);
		else
			std::cout << "! Please enter a valid command." << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
