#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{
	private:
		int user_count_;
		int current_index_;
		Contact contacts_[8];

	public:
		PhoneBook();

		void AddContact(const Contact& contact);
		void ShowContactIncludingSecret(int user_id) const;
		void ShowContact(int user_id) const;
		void ShowAllContact() const;
		int GetUserCount() const;
};
#endif
