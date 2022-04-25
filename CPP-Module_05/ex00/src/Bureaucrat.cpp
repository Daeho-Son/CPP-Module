#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name_("noNamed")
{
	std::cout << "Bureaucrat 기본 생성자 호출" << std::endl;
	grade_ = 150;
}

Bureaucrat::Bureaucrat(std::string name) : name_(name)
{
	std::cout << "Bureaucrat 생성자(string) 호출" << std::endl;
	grade_ = 150;
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
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (os);
}

const std::string Bureaucrat::getName() const
{
	return (name_);
}

int Bureaucrat::getGrade() const
{
	return (grade_);
}

void Bureaucrat::downGrade()
{
	grade_--;
}

void Bureaucrat::upGrade()
{
	grade_++;
}