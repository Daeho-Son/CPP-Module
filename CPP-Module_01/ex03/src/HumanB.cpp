#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	name_ = name;
}

HumanB::~HumanB()
{
	std::cout << "HumanB 소멸자 호출: " << name_ << std::endl;
}

void HumanB::setWeapon(const Weapon& weapon)
{
	weapon_ = &weapon;
}

void HumanB::attack()
{
	std::cout << name_ << " attacks with their " << weapon_->getType() << std::endl;
}