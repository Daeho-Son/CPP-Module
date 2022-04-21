#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal 기본 생성자 호출" << std::endl;
	type_ = "None";
}

WrongAnimal::WrongAnimal(const WrongAnimal& wronganimal)
{
	std::cout << "WrongAnimal 복사 생성자 호출" << std::endl;
	type_ = wronganimal.type_;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal 소멸자 호출" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal)
{
	std::cout << "WrongAnimal 할당 연산자 오버로딩" << std::endl;
	type_ = wronganimal.type_;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << type_ << ": ???" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type_);
}