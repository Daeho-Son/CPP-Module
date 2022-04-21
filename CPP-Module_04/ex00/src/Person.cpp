#include "Person.hpp"

Person::Person()
{
	std::cout << "Person 기본 생성자 호출" << std::endl;
}

Person::Person(const Person& person)
{
	std::cout << "Person 복사 생성자 호출" << std::endl;
}

Person::~Person()
{
	std::cout << "Person 소멸자 호출" << std::endl;
}

Person& Person::operator=(const Person& person)
{
	std::cout << "Person 할당 연산자 오버로딩" << std::endl;
	return (*this);
}
