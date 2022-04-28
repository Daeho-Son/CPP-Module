#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	{
		std::cout << "===== ShrubberyCreationForm Test =====" << std::endl;
		Bureaucrat b145("b145", 145);
		Bureaucrat b146("b146", 146);
		Bureaucrat b137("b137", 137);
		Bureaucrat b138("b138", 138);
		ShrubberyCreationForm sh_form("sh_target");

		b145.signForm(sh_form);
		b145.signForm(sh_form); // 이미 signed
		b146.signForm(sh_form); // sign을 하기에는 grade가 낮음
		// try
		// {
		// 	sh_form.execute(b138);
		// }
		// catch (std::exception& e)
		// {
		// 	std::cout << e.what() << std::endl;
		// }
		try
		{
			sh_form.execute(b137);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	// std::cout << std::endl << std::endl;
	// {
	// 	std::cout << "===== RobotomyRequestForm Test =====" << std::endl;
	// 	Bureaucrat b72("b72", 72);
	// 	Bureaucrat b73("b73", 73);
	// 	Bureaucrat b45("b45", 45);
	// 	Bureaucrat b46("b46", 46);
	// 	RobotomyRequestForm ro_form("ro_target");

	// 	b72.signForm(ro_form);
	// 	b72.signForm(ro_form);
	// 	b73.signForm(ro_form);
	// 	try
	// 	{
	// 		ro_form.execute(b45);
	// 		ro_form.execute(b46);
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl << std::endl;
	// {
	// 	std::cout << "===== PresidentialPardonForm Test =====" << std::endl;
	// 	Bureaucrat b25("b25", 25);
	// 	Bureaucrat b26("b26", 26);
	// 	Bureaucrat b5("45", 5);
	// 	Bureaucrat b6("b6", 6);
	// 	PresidentialPardonForm pr_form("pr_target");

	// 	b25.signForm(pr_form);
	// 	b25.signForm(pr_form);
	// 	b26.signForm(pr_form);
	// 	try
	// 	{
	// 		pr_form.execute(b5);
	// 		pr_form.execute(b6);
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
	return (0);
}