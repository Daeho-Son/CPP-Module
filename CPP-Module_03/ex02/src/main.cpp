#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragtrap1("fragtrap 1");
	FragTrap fragtrap2("fragtrap 2");
	
	fragtrap1.printStatus();
	fragtrap2.printStatus();
	fragtrap1.attack("fragtrap 2");
	fragtrap2.takeDamage(fragtrap1.getAttakDamage());
	fragtrap1.printStatus();
	fragtrap2.printStatus();
	fragtrap2.beRepaired(10);
	fragtrap1.printStatus();
	fragtrap2.printStatus();
	fragtrap1.highFivesGuys();
	fragtrap2.highFivesGuys();
	return (0);
}