#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat 기본 생성자 호출" << std::endl;
	type_ = "Cat";
}

WrongCat::WrongCat(const WrongCat& wrongcat) : WrongAnimal(wrongcat)
{
	std::cout << "WrongCat 복사 생성자 호출" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat 소멸자 호출" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongcat)
{
	std::cout << "WrongCat 할당 연산자 오버로딩" << std::endl;
	WrongAnimal::operator=(wrongcat);
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << type_ << ": ..." << std::endl;
}