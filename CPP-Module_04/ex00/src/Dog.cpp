#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog 기본 생성자 호출" << std::endl;
	type_ = "Dog";
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	std::cout << "Dog 복사 생성자 호출" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog 소멸자 호출" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog 할당 연산자 오버로딩" << std::endl;
	Animal::operator=(dog);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << type_ << ": dog dog" << std::endl;
}