#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name_ = "ClapTrap";
	hit_points_ = 10;
	energy_points_ = 10;
	attack_damage_ = 0;
}

void ClapTrap::attack(const std::string& target)
{

	std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
}

void ClapTrap::beRepaired(unsigned int amount)
{

}
