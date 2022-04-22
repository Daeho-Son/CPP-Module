#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap 기본 생성자 호출" << std::endl;
	hit_points_ = 100;
	energy_points_ = 100;
	attack_damage_ = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap 생성자(string) 호출: " << name << std::endl;
	hit_points_ = 100;
	energy_points_ = 100;
	attack_damage_ = 30;
}

FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "FragTrap 복사 생성자 호출" << fragtrap.name_ << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap 소멸자 호출: " << name_ << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap)
{
	std::cout << "FragTrap 할당 연산자 오버로딩: " << fragtrap.name_ << std::endl;
	ClapTrap::operator=(fragtrap);
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name_ << ": HIGHFIVE" << std::endl;
}
