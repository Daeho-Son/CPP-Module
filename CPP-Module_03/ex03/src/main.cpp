#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamondtrap1("diamondtrap 1");
	DiamondTrap diamondtrap2("diamondtrap 2");

	std::cout << "1: " << diamondtrap1.getName() << std::endl;
	std::cout << "2: " << diamondtrap2.getName() << std::endl;
	std::cout << diamondtrap1.getAttakDamage() << std::endl;

	// ClapTrap claptrap1("claptrap 1");
	// ClapTrap claptrap2("claptrap 2");

	// std::cout << claptrap1.getAttakDamage() << std::endl;
	// std::cout << claptrap2.getAttakDamage() << std::endl;


	return (0);
}