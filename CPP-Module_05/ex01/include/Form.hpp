#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>

class Bureaucrat;
class Form
{
	private:
		const std::string name_;
		bool is_signed;
		const int grade_to_signed_;
		const int grade_to_execute_;

	public:
		Form();
		Form(const Form& form);
		~Form();

		Form& operator=(const Form& form);

		void beSigned(Bureaucrat& bureaucrat);

		const std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSigned() const;
		int getGradeToExecute() const;

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Form::GradeTooHighException()");
		}
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Form::GradeTooLowException()");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
