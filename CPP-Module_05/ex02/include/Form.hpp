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
		Form(std::string name, int grade_to_signed, int grade_to_execute);
		Form(const Form& form);
		~Form();

		Form& operator=(const Form& form);

		void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;

		const std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSigned() const;
		int getGradeToExecute() const;

	class GradeTooHighException : public std::exception
	{
		const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char* what(void) const throw();
	};

	class AlreadySignedException : public std::exception
	{
		public:
			const char *what(void) const throw();
	};

	class NonSingedException : public std::exception
	{
		const char* what(void) const throw();
	};

	class ExecuteGradeTooLowException : public std::exception
	{
		const char* what(void) const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
