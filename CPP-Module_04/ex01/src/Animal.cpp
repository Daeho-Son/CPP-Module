#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal 기본 생성자 호출" << std::endl;
	type_ = "None";
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal 복사 생성자 호출" << std::endl;
	type_ = animal.type_;
}

Animal::~Animal()
{
	std::cout << "Animal 소멸자 호출" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal 할당 연산자 오버로딩" << std::endl;
	type_ = animal.type_;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << type_ << ": ???" << std::endl;
}

std::string Animal::getType() const
{
	return (type_);
}