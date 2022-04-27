#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog 기본 생성자 호출" << std::endl;
	type_ = "Dog";
	brain_ = new Brain();
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	std::cout << "Dog 복사 생성자 호출" << std::endl;
	if (brain_ != NULL)
	{
		delete brain_;
		brain_ = NULL;
	}
	brain_ = new Brain(*(dog.getBrain()));
}

Dog::~Dog()
{
	std::cout << "Dog 소멸자 호출: " << type_ <<  std::endl;
	if (brain_ !=NULL)
	{
		delete brain_;
		brain_ = NULL;
	}
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog 할당 연산자 오버로딩" << std::endl;
	Animal::operator=(dog);
	if (brain_ != NULL)
	{
		delete brain_;
		brain_ = NULL;
	}
	brain_ = new Brain();
	*brain_ = *(dog.brain_);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << type_ << ": dog dog" << std::endl;
}

Brain* Dog::getBrain() const
{
	if (brain_ == NULL)
	{
		std::cout << "뇌가 없습니다." << std::endl;
		return (NULL);
	}
	return (brain_);
}

void Dog::removeBrain()
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