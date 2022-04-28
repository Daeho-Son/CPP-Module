#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
	: name_("Form"), grade_to_signed_(1), grade_to_execute_(1)
{
	std::cout << "Form 기본 생성자 호출" << std::endl;
	is_signed = false;
}

Form::Form(std::string name, int grade_to_signed, int grade_to_execute)
	: name_(name), grade_to_signed_(grade_to_signed), grade_to_execute_(grade_to_execute)
{
	std::cout << "Form 생성자 (string, int, int) 호출" << std::endl;
	if (grade_to_signed > 150 || grade_to_execute > 150)
		throw GradeTooLowException();
	if (grade_to_signed < 1 || grade_to_execute < 1)
		throw GradeTooHighException();
	is_signed = false;
}

Form::Form(const Form& form)
	: name_(form.name_), grade_to_signed_(form.grade_to_signed_), grade_to_execute_(form.grade_to_execute_)
{
	std::cout << "Form 복사 생성자 호출" << std::endl;
	is_signed = form.is_signed;
}

Form::~Form()
{
	std::cout << "Form 소멸자 호출: " << name_ << std::endl;
}

Form& Form::operator=(const Form& form)
{
	std::cout << "Form 할당 연산자 오버로딩" << std::endl;
	is_signed = form.is_signed;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << form.getName() << ": " << form.getIsSigned() << ", " << form.getGradeToSigned() << ", " << form.getGradeToExecute();
	return (os);
}

// TODO: bureaucrat의 등급이 충분히 높은 경우(필요한 등급보다 높거나 같음) form 상태를 signed로 변경
void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > grade_to_signed_)
		throw GradeTooLowException();
	if(is_signed == true)
		throw AlreadySignedException();
	is_signed = true;
}

const std::string Form::getName() const
{
	return (name_);
}

bool Form::getIsSigned() const
{
	return (is_signed);
}

int Form::getGradeToSigned() const
{
	return (grade_to_signed_);
}

int Form::getGradeToExecute() const
{
	return (grade_to_execute_);
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Form::GradeTooHighException()");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Form::GradeTooLowException()");
}

const char *Form::AlreadySignedException::what(void) const throw() 
{
	return ("Form::AlreadySignedException()");
}

const char *Form::NonSingedException::what(void) const throw()
{
	return ("Form::nonSignedException()");
}

const char *Form::ExecuteGradeTooLowException::what(void) const throw()
{
	return ("Form::GradeTooLowException()");
}