#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	{
		std::cout << "===== ShrubberyCreationForm Test =====" << std::endl;
		Bureaucrat b1("b1", 1);
		Bureaucrat b150("b150", 150);
		Intern someRandomIntern;
		Form *rrf;

		std::cout << "\nKO: makeForm() 시도" << std::endl;
		rrf = someRandomIntern.makeForm("shrubbery", "Bender");
		std::cout << "\nOK: makeForm() 시도" << std::endl;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

		std::cout << "\nKO: sign 되지 않은 form에 execute 시도" << std::endl;
		b1.executeForm(*rrf);
		b150.executeForm(*rrf);

		std::cout << "\nKO: sign 되지 않은 form에 sign 시도" << std::endl;
		b150.signForm(*rrf);

		std::cout << "\nOK: sign 되지 않은 form에 sign 시도" << std::endl;
		b1.signForm(*rrf);

		std::cout << "\nKO: signed 된 form에 sign 시도" << std::endl;
		b1.signForm(*rrf);

		std::cout << "\nKO: signed 된 form에 sign 시도" << std::endl;
		b150.signForm(*rrf);

		std::cout << "\nOK: signed 된 form에 execute 시도" << std::endl;
		b1.executeForm(*rrf);

		std::cout << "\nKO: signed 된 form에 execute 시도" << std::endl;
		b150.executeForm(*rrf);
		
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== RobotomyRequestForm Test =====" << std::endl;
		Bureaucrat b1("b1", 1);
		Bureaucrat b150("b150", 150);
		Intern someRandomIntern;
		Form *rrf;

		std::cout << "\nKO: makeForm() 시도" << std::endl;
		rrf = someRandomIntern.makeForm("robotomy", "Bender");
		std::cout << "\nOK: makeForm() 시도" << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		std::cout << "\nKO: sign 되지 않은 form에 execute 시도" << std::endl;
		b1.executeForm(*rrf);
		b150.executeForm(*rrf);

		std::cout << "\nKO: sign 되지 않은 form에 sign 시도" << std::endl;
		b150.signForm(*rrf);

		std::cout << "\nOK: sign 되지 않은 form에 sign 시도" << std::endl;
		b1.signForm(*rrf);

		std::cout << "\nKO: signed 된 form에 sign 시도" << std::endl;
		b1.signForm(*rrf);

		std::cout << "\nKO: signed 된 form에 sign 시도" << std::endl;
		b150.signForm(*rrf);

		std::cout << "\nOK: signed 된 form에 execute 시도" << std::endl;
		b1.executeForm(*rrf);

		std::cout << "\nKO: signed 된 form에 execute 시도" << std::endl;
		b150.executeForm(*rrf);
		
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== PresidentialPardonForm Test =====" << std::endl;
		Bureaucrat b1("b1", 1);
		Bureaucrat b150("b150", 150);
		Intern someRandomIntern;
		Form *rrf;

		std::cout << "\nKO: makeForm() 시도" << std::endl;
		rrf = someRandomIntern.makeForm("presidential", "Bender");
		std::cout << "\nOK: makeForm() 시도" << std::endl;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");

		std::cout << "\nKO: sign 되지 않은 form에 execute 시도" << std::endl;
		b1.executeForm(*rrf);
		b150.executeForm(*rrf);

		std::cout << "\nKO: sign 되지 않은 form에 sign 시도" << std::endl;
		b150.signForm(*rrf);

		std::cout << "\nOK: sign 되지 않은 form에 sign 시도" << std::endl;
		b1.signForm(*rrf);

		std::cout << "\nKO: signed 된 form에 sign 시도" << std::endl;
		b1.signForm(*rrf);

		std::cout << "\nKO: signed 된 form에 sign 시도" << std::endl;
		b150.signForm(*rrf);

		std::cout << "\nOK: signed 된 form에 execute 시도" << std::endl;
		b1.executeForm(*rrf);

		std::cout << "\nKO: signed 된 form에 execute 시도" << std::endl;
		b150.executeForm(*rrf);
		
		std::cout << std::endl;
	}
	return (0);
}