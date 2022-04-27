#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <exception>

class Bureaucrat;
class RobotomyRequestForm : public Form
{
	private:
		std::string target_;
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& robotomyrequestform);
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=(const RobotomyRequestForm& robotomyrequestform);

		void execute(Bureaucrat const & executor) const;
};

#endif
