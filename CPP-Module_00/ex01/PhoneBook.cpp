#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	user_count_ = 0;
	current_index_ = 0;
	memset(&user_db_, 0, sizeof(t_user_data) * 8);
}

void PhoneBook::AddUser(t_user_data user_data)
{
	current_index_ = (current_index_ + 1) % 8;
	user_db_[current_index_].first_name = user_data.first_name;
	user_db_[current_index_].last_name = user_data.last_name;
	user_db_[current_index_].nickname = user_data.nickname;
	user_db_[current_index_].phone_number = user_data.phone_number;
	user_db_[current_index_].darkest_secret = user_data.darkest_secret;
	user_count_++;

}

void PhoneBook::ShowUserData(int user_id) const
{
	std::cout << user_db_[user_id].first_name << std::endl;
	std::cout << user_db_[user_id].last_name << std::endl;
	std::cout << user_db_[user_id].nickname << std::endl;
	std::cout << user_db_[user_id].phone_number << std::endl;
	std::cout << std::endl;
}

void PhoneBook::ShowAllUserData() const
{
	for (int i = 0; i < user_count_; i++)
	{
		std::cout << user_db_[i].first_name << std::endl;
		std::cout << user_db_[i].last_name << std::endl;
		std::cout << user_db_[i].nickname << std::endl;
		std::cout << user_db_[i].phone_number << std::endl;
		std::cout << user_db_[i].darkest_secret << std::endl;
	}
}

int PhoneBook::GetUserCount() const
{
	return (user_count_);
}
