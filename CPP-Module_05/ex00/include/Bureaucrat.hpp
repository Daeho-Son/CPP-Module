#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

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

		const std::string getName() const;
		int getGrade() const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif
