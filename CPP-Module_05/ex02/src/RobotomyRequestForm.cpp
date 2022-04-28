#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
	: Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm 기본 생성자 호출" << std::endl;
	target_ = "Non-Target";
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm 기본 생성자 호출" << std::endl;
	target_ = target;
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robotomyrequestform)
	: Form(robotomyrequestform)
{
	std::cout << "RobotomyRequestForm 복사 생성자 호출" << std::endl;
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm 소멸자 호출" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomyrequestform)
{
	std::cout << "RobotomyRequestForm 할당 연산자 오버로딩" << std::endl;
	Form::operator=(robotomyrequestform);
	srand(time(NULL));
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getGradeToExecute())
		throw ExecuteGradeTooLowException();
	if (getIsSigned() == false)
		throw NonSingedException();
	
	std::cout << "(대충 드릴 뚫는 소리)" << std::endl;
	int random_number = rand() % 2;
	if (random_number == 0)
	{
		std::cout << executor.getName() << ": " << target_ << "이(가) 로봇화에 실패하였습니다." << std::endl;
	}
	else if (random_number == 1)
	{
		std::cout << executor.getName() << ": " << target_ << "이(가) 로봇화에 성공하였습니다." << std::endl;
	}
}