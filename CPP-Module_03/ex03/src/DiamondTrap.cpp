#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap 기본 생성자 호출" << std::endl;
	name_ = "Diamond No Name";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap 생성자(string) 호출: " << name << std::endl;
	name_ = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap) : ClapTrap(diamondtrap)
{
	std::cout << "DiamondTrap 복사 생성자 호출" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DimondTrap 소멸자 호출: " << name_ << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	std::cout << "DiamondTrap 할당 연산자 오버로딩" << std::endl;
	ClapTrap::operator=(diamondtrap);
	return (*this);
}