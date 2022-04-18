#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap 기본 생성자 호출" << std::endl;
	name_ = "ClapTrap";
	hit_points_ = 10;
	energy_points_ = 10;
	attack_damage_ = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap 생성자(string) 호출: " << name << std::endl;
	name_ = name;
	hit_points_ = 10;
	energy_points_ = 10;
	attack_damage_ = 0;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	std::cout << "ClapTrap 복사 생성자 호출: " << claptrap.name_ << std::endl;
	name_ = claptrap.name_;
	hit_points_ = claptrap.hit_points_;
	energy_points_ = claptrap.energy_points_;
	attack_damage_ = claptrap.attack_damage_;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap 소멸자 호출: " << name_ << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
	std::cout << "ClapTrap 할당 연산자 오버로딩: " << claptrap.name_ << std::endl;
	name_ = claptrap.name_;
	hit_points_ = claptrap.hit_points_;
	energy_points_ = claptrap.energy_points_;
	attack_damage_ = claptrap.attack_damage_;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name_ << "이(가) " << target << "에게 " << attack_damage_ << "만큼 피해를 줬습니다." << std::endl;
	energy_points_--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name_ << "이(가) " << amount << "만큼 피해를 받았습니다." << std::endl;	
	hit_points_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name_ << "이(가) " << amount << "만큼 수리했습니다." << std::endl;
	hit_points_ += amount;
	energy_points_--;
}

int ClapTrap::getAttakDamage() const
{
	return (attack_damage_);
}

void ClapTrap::printStatus()
{
	std::cout << "Name: " << name_ << std::endl;
	std::cout << "Hit points: " << hit_points_ << std::endl;
	std::cout << "Energy points: " << energy_points_ << std::endl;
	std::cout << "Attack damage: " << attack_damage_ << std::endl;
	std::cout << std::endl;
}
