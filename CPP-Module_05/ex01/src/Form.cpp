#include "Form.hpp"

Form::Form()
{
	std::cout << "Form 기본 생성자 호출" << std::endl;
}

Form::Form(const Form& form)
{
	std::cout << "Form 복사 생성자 호출" << std::endl;
}

Form::~Form()
{
	std::cout << "Form 소멸자 호출" << std::endl;
}

Form& Form::operator=(const Form& form)
{
	std::cout << "Form 할당 연산자 오버로딩" << std::endl;
	return (*this);
}
