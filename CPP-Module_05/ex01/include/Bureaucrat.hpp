#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Form;
class Bureaucrat
{
	private:
		const std::string name_;
		int grade_;

	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& bureaucrat);

		void downGrade();
		void upGrade();
		void signForm(Form& form);

		const std::string getName() const;
		int getGrade() const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what(void) const throw()
				{
					return ("Bureaucrat::GradeTooHighException()");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what(void) const throw()
				{
					return ("Bureaucrat::GradeTooLowException()");
				}
		};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif
