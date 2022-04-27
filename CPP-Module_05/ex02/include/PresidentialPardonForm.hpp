#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <exception>

class Bureaucrat;
class PresidentialPardonForm : public Form
{
	private:
		std::string target_;
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& presidentialpardonform);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=(const PresidentialPardonForm& presidentialpardonform);

		void execute(Bureaucrat const & executor) const;
};

#endif
