#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	type_ = type;
}

Weapon::Weapon(const Weapon& weapon)
{
	type_ = weapon.getType();
}

Weapon::~Weapon()
{
	std::cout << "Weapon 소멸자 호출: " << type_ << std::endl;
}

void Weapon::setType(std::string type)
{
	type_ = type;
}

const std::string& Weapon::getType() const
{
	return (type_);
}