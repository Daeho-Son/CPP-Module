#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon& weapon) : weapon_(weapon)
{
	name_ = name;
}

HumanA::~HumanA()
{
	std::cout << "HumanA 소멸자 호출: " << name_ << std::endl;
}

void HumanA::attack()
{
	std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}