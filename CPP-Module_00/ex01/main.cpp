#include "PhoneBook.hpp"

static void process_eof()
{
	std::cout << std::endl << "The eof signal has been entered. EXIT" << std::endl;
	exit(0);
}

static std::string get_input_str()
{
	std::string str = ""; 

	do
	{
		getline(std::cin, str);
		if (std::cin.eof())
			process_eof();
		if (str == "")
		{
			std::cout << "! Please enter valid number." << std::endl;
			std::cout << ": ";
		}
	} while (str == "");
	return (str);
}

static Contact input_data_and_get_contact()
{
	Contact contact;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter the first name: ";
	first_name = get_input_str();
	contact.SetFirstName(first_name);
	std::cout << "Enter the last name: ";
	last_name = get_input_str();
	contact.SetLastName(last_name);
	std::cout << "Enter the nickname: ";
	nickname = get_input_str();
	contact.SetNickName(nickname);
	std::cout << "Enter the phone number: ";
	phone_number = get_input_str();
	contact.SetPhoneNumber(phone_number);
	std::cout << "Enter the darkest secret: ";
	darkest_secret = get_input_str();
	contact.SetDarkestSecret(darkest_secret);
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
		std::cout << std::endl << ": ";
		std::cin >> search_number;
		if (std::cin.eof())
			process_eof();
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
		std::cout << "Enter the command. (EXIT, ADD, SEARCH): ";
		getline(std::cin, command);
		if (std::cin.eof())
			process_eof();
		if (command == "EXIT" || command == "Exit" || command == "exit")
			break;
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
