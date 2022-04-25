#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string name_;
		int grade_;

	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(const Bureaucrat& bureaucrat);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& bureaucrat);

		void downGrade();
		void upGrade();

		const std::string getName() const;
		int getGrade() const;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif
