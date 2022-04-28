#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern 기본 생성자 호출" << std::endl;
}

Intern::Intern(const Intern& intern)
{
	*this = intern;
	std::cout << "Intern 복사 생성자 호출" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern 소멸자 호출" << std::endl;
}

Intern& Intern::operator=(const Intern& intern)
{
	std::cout << "Intern 할당 연산자 오버로딩" << std::endl;
	(void)intern;
	return (*this);
}

Form* makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form* makeRobotomyRequestFrom(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form* makePresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(std::string name, std::string target)
{
	std::string form_names[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	Form* (*fp_form[3])(std::string) = {
		makeShrubberyCreationForm,
		makeRobotomyRequestFrom,
		makePresidentialPardon
	};
	int i;
	for (i = 0; i < 3; i++)
	{
		if (form_names[i] == name)
		{
			break ;
		}
	}
	if (i == 3)
	{
		std::cerr << name << "에 해당하는 Form은 존재하지 않습니다." << std::endl;
		return (NULL);
	}
	std::cout << "Intern creates " << name << std::endl;
	return (fp_form[i](target));
}
