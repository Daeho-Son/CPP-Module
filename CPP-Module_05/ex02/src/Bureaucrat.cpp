#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name_("Bureaucrat")
{
	std::cout << "Bureaucrat 기본 생성자 호출" << std::endl;
	grade_ = 150;
}

Bureaucrat::Bureaucrat(std::string name) : name_(name)
{
	std::cout << "Bureaucrat 생성자(string) 호출" << std::endl;
	grade_ = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
	std::cout << "Bureaucrat 생성자(string, int) 호출" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : name_(bureaucrat.name_)
{
	std::cout << "Bureaucrat 복사 생성자 호출" << std::endl;
	grade_ = bureaucrat.grade_;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat 소멸자 호출: " << name_ << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	std::cout << "Bureaucrat 할당 연산자 오버로딩" << std::endl;
	grade_ = bureaucrat.grade_;
	return (*this);
}
std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

// TODO: form이 signed된 경우 문자열 출력
void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::downGrade()
{
	if (grade_ + 1 > 150)
		throw GradeTooLowException();
	grade_++;
}

void Bureaucrat::upGrade()
{
	if (grade_ - 1 < 1)
		throw GradeTooHighException();
	grade_--;
}

const std::string Bureaucrat::getName() const
{
	return (name_);
}

int Bureaucrat::getGrade() const
{
	return (grade_);
}
