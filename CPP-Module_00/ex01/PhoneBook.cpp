#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	user_count_ = 0;
	current_index_ = 0;
}

void PhoneBook::AddContact(const Contact& contact_info)
{
	Contact& contact = contacts_[current_index_];

	contact.SetUserId(current_index_);
	contact.SetFirstName(contact_info.GetFirstName());
	contact.SetLastName(contact_info.GetLastName());
	contact.SetNickName(contact_info.GetNickName());
	contact.SetPhoneNumber(contact_info.GetPhoneNumber());
	contact.SetDarkestSecret(contact_info.GetDarkestSecret());
	current_index_ = ++current_index_ % 8;
	if (0 <= user_count_ && user_count_ < 8)
		user_count_++;
}

void PhoneBook::ShowContactIncludingSecret(int user_id) const
{
	Contact contact = contacts_[user_id];

	std::cout << "User ID: " << contact.GetUserID() << std::endl;
	std::cout << "First Name: " << contact.GetFirstName() << std::endl;
	std::cout << "Last Name: " << contact.GetLastName() << std::endl;
	std::cout << "Nickname: " << contact.GetNickName() << std::endl;;
	std::cout << "Phone Number: " << contact.GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.GetDarkestSecret() << std::endl;
}

static std::string print_summary_string(std::string str)
{
	std::string return_str = "";

	if (str.size() <= 10)
		return (str);
	return_str = str.substr(0, 9);
	return_str += '.';		
	return (return_str);
}

void PhoneBook::ShowContact(int user_id) const
{
	Contact contact = contacts_[user_id];

	std::cout << "|" << std::setw(10) << contact.GetUserID();
	std::cout << "|" << std::setw(10) << print_summary_string(contact.GetFirstName());
	std::cout << "|" << std::setw(10) << print_summary_string(contact.GetLastName());
	std::cout << "|" << std::setw(10) << print_summary_string(contact.GetNickName());
	std::cout << "|" << std::endl;
}

void PhoneBook::ShowAllContact() const
{
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < user_count_; i++)
		ShowContact(i);
}

int PhoneBook::GetUserCount() const
{
	return (user_count_);
}
