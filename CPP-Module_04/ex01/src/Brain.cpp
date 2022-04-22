#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain 기본 생성자 호출" << std::endl;
	idea_ = new std::string[100];
	for (int i = 0; i < 100; ++i)
	{
		idea_[i] = "생각";
	}
}

Brain::Brain(const Brain* brain)
{
	std::cout << "Brain 생성자(Brain*) 호출" << std::endl;
	idea_ = new std::string[100];
	for (int i = 0; i < 100; ++i)
	{
		idea_[i] = brain->idea_[i];
	}
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain 복사 생성자 호출" << std::endl;
	idea_ = new std::string[100];
	for (int i = 0; i < 100; ++i)
	{
		idea_[i] = brain.idea_[i];
	}
}

Brain::~Brain()
{
	std::cout << "Brain 소멸자 호출" << std::endl;
	for (int i = 0; i < 100; ++i)
	{
		idea_[i] = "";
	}
	delete[] idea_;
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "Brain 할당 연산자 오버로딩" << std::endl;
	idea_ = new std::string[100];
	for (int i = 0; i < 100; ++i)
	{
		idea_[i] = brain.idea_[i];
	}
	return (*this);
}

std::string* Brain::getIdea() const
{
	return (idea_);
}