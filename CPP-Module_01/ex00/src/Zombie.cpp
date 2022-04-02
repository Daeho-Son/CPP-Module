#include "../include/Zombie.hpp"

Zombie::Zombie()
{
	name_ = "no_name";
}

Zombie::Zombie(std::string name)
{
	name_ = name;
}

Zombie::~Zombie()
{
	std::cout << "소멸자 호출: " << name_ << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}