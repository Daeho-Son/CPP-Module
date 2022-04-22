#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat 기본 생성자 호출" << std::endl;
	type_ = "Cat";
	brain_ = new Brain();
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	std::cout << "Cat 복사 생성자 호출" << std::endl;
	brain_ = new Brain(cat.getBrain());
}

Cat::~Cat()
{
	std::cout << "Cat 소멸자 호출" << std::endl;
	delete brain_;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat 할당 연산자 오버로딩" << std::endl;
	Animal::operator=(cat);
	brain_ = new Brain(cat.getBrain());
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << type_ << ": ..." << std::endl;
}

Brain* Cat::getBrain() const
{
	return (brain_);
}

void Cat::removeBrain()
{
	std::cout << "Cat::removeBrain()" << std::endl;
	delete brain_;
}