#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
	: Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm 기본 생성자 호출" << std::endl;
	target_ = "Non-Target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm 기본 생성자 호출" << std::endl;
	target_ = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robotomyrequestform)
	: Form(robotomyrequestform)
{
	std::cout << "RobotomyRequestForm 복사 생성자 호출" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm 소멸자 호출" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomyrequestform)
{
	std::cout << "RobotomyRequestForm 할당 연산자 오버로딩" << std::endl;
	Form::operator=(robotomyrequestform);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() == false)
		throw NonSingedException();
	if (executor.getGrade() > getGradeToExecute())
		throw ExecuteGradeTooLowException();
	
	// TODO: execute 행동 추가
	std::cout << "RobotomyRequestForm::execute()" << std::endl;

}