#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		int user_id_;
		std::string first_name_;
		std::string last_name_;
		std::string nickname_;
		std::string phone_number_;
		std::string darkest_secret_;

	public:
		Contact();

		void SetUserId(const int user_id);
		void SetFirstName(const std::string first_name);
		void SetLastName(const std::string last_name);
		void SetNickName(const std::string nickname);
		void SetPhoneNumber(const std::string phone_number);
		void SetDarkestSecret(const std::string darkest_secret);
		int GetUserID() const;
		std::string GetFirstName() const;
		std::string GetLastName() const;
		std::string GetNickName() const;
		std::string GetPhoneNumber() const;
		std::string GetDarkestSecret() const;
};

#endif