#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <exception>

class Bureaucrat;
class ShrubberyCreationForm : public Form
{
	private:
		std::string target_;
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform);
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shrubberycreationform);

		void execute(Bureaucrat const & executor) const;
};

#endif
