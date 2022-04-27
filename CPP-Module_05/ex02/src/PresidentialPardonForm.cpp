#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm 기본 생성자 호출" << std::endl;
	target_ = "Non-Target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm 기본 생성자 호출" << std::endl;
	target_ = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidentialpardonform)
	: Form(presidentialpardonform)
{
	std::cout << "PresidentialPardonForm 복사 생성자 호출" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm 소멸자 호출" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentialpardonform)
{
	std::cout << "PresidentialPardonForm 할당 연산자 오버로딩" << std::endl;
	Form::operator=(presidentialpardonform);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() == false)
		throw NonSingedException();
	if (executor.getGrade() > getGradeToExecute())
		throw ExecuteGradeTooLowException();

	// TODO: execute 행동 추가
	std::cout << "PresidentialPardonForm::execute()" << std::endl;
}