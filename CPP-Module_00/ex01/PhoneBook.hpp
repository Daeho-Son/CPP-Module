#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

typedef struct s_user_data
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
} t_user_data;

class PhoneBook
{
	private:
		int current_index_;
		int user_count_;
		t_user_data user_db_[8];

	public:
		PhoneBook();
		void AddUser(t_user_data user_data);
		void ShowUserData(int user_id) const;
		void ShowAllUserData() const;
		int GetUserCount() const;
		
};

#endif
