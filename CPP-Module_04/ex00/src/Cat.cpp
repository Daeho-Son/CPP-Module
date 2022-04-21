#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat 기본 생성자 호출" << std::endl;
	type_ = "Cat";
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	std::cout << "Cat 복사 생성자 호출" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat 소멸자 호출" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat 할당 연산자 오버로딩" << std::endl;
	Animal::operator=(cat);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << type_ << ": ..." << std::endl;
}