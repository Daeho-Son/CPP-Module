#include "../include/Zombie.hpp"

Zombie::Zombie()
{
	name_ = "";
}

Zombie::Zombie(std::string name)
{
	name_ = name;
}

Zombie::~Zombie()
{
	std::cout << "소멸자 호출: " << name_ << std::endl;
}

void Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	name_ = name;
}