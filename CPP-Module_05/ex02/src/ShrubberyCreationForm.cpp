#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm 기본 생성자 호출" << std::endl;
	target_ = "Non-Target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm 기본 생성자 호출" << std::endl;
	target_ = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberycreationform)
	: Form(shrubberycreationform)
{
	std::cout << "ShrubberyCreationForm 복사 생성자 호출" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm 소멸자 호출" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubberycreationform)
{
	std::cout << "ShrubberyCreationForm 할당 연산자 오버로딩" << std::endl;
	Form::operator=(shrubberycreationform);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		throw NonSingedException();
	if (executor.getGrade() > getGradeToExecute())
		throw ExecuteGradeTooLowException();
	std::string shrubbery = "               ,@@@@@@@,\n"
							"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
							"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
							"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
							"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
							"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
							"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
							"       |o|        | |         | |\n"
							"       |.|        | |         | |\n"
							"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
	std::ofstream write_file;
	std::string file_name = target_ + "_srubbery";
	write_file.open(file_name);
	write_file << shrubbery;
	write_file.close();
	std::cout << "I planted a Shrubbery!" << std::endl;
}
