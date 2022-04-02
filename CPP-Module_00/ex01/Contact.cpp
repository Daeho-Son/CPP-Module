#include "Contact.hpp"

Contact::Contact()
{
	user_id_ = 0;
	first_name_ = "";
	last_name_ = "";
	nickname_ = "";
	phone_number_ = "";
	darkest_secret_ = "";
}

void Contact::SetUserId(const int user_id)
{
	user_id_ = user_id + 1;
}

void Contact::SetFirstName(const std::string first_name)
{
	first_name_ = first_name;
}

void Contact::SetLastName(const std::string last_name)
{
	last_name_ = last_name;
}

void Contact::SetNickName(const std::string nickname)
{
	nickname_ = nickname;
}

void Contact::SetPhoneNumber(const std::string phone_number)
{
	phone_number_ = phone_number;
}

void Contact::SetDarkestSecret(const std::string darkest_secret)
{
	darkest_secret_ = darkest_secret;
}

int Contact::GetUserID() const
{
	return (user_id_);
}

std::string Contact::GetFirstName() const
{
	return (first_name_);
}

std::string Contact::GetLastName() const
{
	return (last_name_);
}

std::string Contact::GetNickName() const
{
	return (nickname_);
}

std::string Contact::GetPhoneNumber() const
{
	return (phone_number_);
}

std::string Contact::GetDarkestSecret() const
{
	return (darkest_secret_);
}