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
	if (brain_ != NULL)
	{
		delete brain_;
		brain_ = NULL;
	}
	brain_ = new Brain(*(cat.getBrain()));
}

Cat::~Cat()
{
	std::cout << "Cat 소멸자 호출: " << type_ <<  std::endl;
	if (brain_ != NULL)
	{
		delete brain_;
		brain_ = NULL;
	}
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat 할당 연산자 오버로딩" << std::endl;
	Animal::operator=(cat);
	if (brain_ != NULL)
	{
		delete brain_;
		brain_ = NULL;
	}
	brain_ = new Brain();
	*brain_ = *(cat.brain_);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << type_ << ": cat cat" << std::endl;
}

Brain* Cat::getBrain() const
{
	if (brain_ == NULL)
	{
		std::cout << "뇌가 없습니다." << std::endl;
		return (NULL);
	}
	return (brain_);
}

void Cat::removeBrain()
{
	std::cout << type_ << ": removeBrain()" << std::endl;
	if (brain_ != NULL)
	{
		delete brain_;
		brain_ = NULL;
	}
	else
		std::cout << "뇌가 이미 없습니다." << std::endl;
}