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

		std::cout << "\n# KO: signed 되지 않은 form에 execute 시도" << std::endl;
		b137.executeForm(sh_form);
		b138.executeForm(sh_form);
		std::cout << "\n# KO: signed 되지 않은 form에 sign 시도" << std::endl;
		b146.signForm(sh_form);
		std::cout << "\n# OK: signed 되지 않은 form에 sign 시도" << std::endl;
		b145.signForm(sh_form);
		std::cout << "\n# KO: signed 된 form에 sign 시도" << std::endl;
		b145.signForm(sh_form);
		std::cout << "\n# KO: signed 된 form에 sign 시도" << std::endl;
		b146.signForm(sh_form);
		std::cout << "\n# OK: signed 된 form에 excute 시도" << std::endl;
		b137.executeForm(sh_form);
		std::cout << "\n# KO: signed 된 form에 excute 시도" << std::endl;
		b138.executeForm(sh_form);
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== RobotomyRequestForm Test =====" << std::endl;
		Bureaucrat b72("b72", 72);
		Bureaucrat b73("b73", 73);
		Bureaucrat b45("b45", 45);
		Bureaucrat b46("b46", 46);
		RobotomyRequestForm ro_form("ro_target");

		std::cout << "\n# KO: signed 되지 않은 form에 execute 시도" << std::endl;
		b45.executeForm(ro_form);
		b46.executeForm(ro_form);
		std::cout << "\n# KO: signed 되지 않은 form에 sign 시도" << std::endl;
		b73.signForm(ro_form);
		std::cout << "\n# OK: signed 되지 않은 form에 sign 시도" << std::endl;
		b72.signForm(ro_form);
		std::cout << "\n# KO: signed 된 form에 sign 시도" << std::endl;
		b72.signForm(ro_form);
		std::cout << "\n# KO: signed 된 form에 sign 시도" << std::endl;
		b73.signForm(ro_form);
		std::cout << "\n# OK: signed 된 form에 excute 시도" << std::endl;
		b45.executeForm(ro_form);
		std::cout << "\n# KO: signed 된 form에 excute 시도" << std::endl;
		b46.executeForm(ro_form);
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== PresidentialPardonForm Test =====" << std::endl;
		Bureaucrat b25("b25", 25);
		Bureaucrat b26("b26", 26);
		Bureaucrat b5("45", 5);
		Bureaucrat b6("b6", 6);
		PresidentialPardonForm pr_form("pr_target");

		std::cout << "\n# KO: signed 되지 않은 form에 execute 시도" << std::endl;
		b5.executeForm(pr_form);
		b6.executeForm(pr_form);
		std::cout << "\n# KO: signed 되지 않은 form에 sign 시도" << std::endl;
		b26.signForm(pr_form);
		std::cout << "\n# OK: signed 되지 않은 form에 sign 시도" << std::endl;
		b25.signForm(pr_form);
		std::cout << "\n# KO: signed 된 form에 sign 시도" << std::endl;
		b25.signForm(pr_form);
		std::cout << "\n# KO: signed 된 form에 sign 시도" << std::endl;
		b26.signForm(pr_form);
		std::cout << "\n# OK: signed 된 form에 excute 시도" << std::endl;
		b5.executeForm(pr_form);
		std::cout << "\n# KO: signed 된 form에 excute 시도" << std::endl;
		b6.executeForm(pr_form);
		std::cout << std::endl;
	}
	return (0);
}