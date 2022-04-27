#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
	: name_("Form"), grade_to_signed_(1), grade_to_execute_(1)
{
	std::cout << "Form 기본 생성자 호출" << std::endl;
	is_signed = false;
}

Form::Form(const Form& form)
	: name_(form.name_), grade_to_signed_(form.grade_to_signed_), grade_to_execute_(form.grade_to_execute_)
{
	std::cout << "Form 복사 생성자 호출" << std::endl;
	is_signed = false;
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
void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > grade_to_signed_)
		throw GradeTooLowException();
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
