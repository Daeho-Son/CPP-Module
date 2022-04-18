#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavtrap1("scavtrap 1");
	ScavTrap scavtrap2("scavtrap 2");

	scavtrap1.printStatus();
	scavtrap2.printStatus();
	scavtrap1.attack("scavtrap 2");
	scavtrap2.takeDamage(scavtrap1.getAttakDamage());
	scavtrap1.printStatus();
	scavtrap2.printStatus();
	scavtrap2.beRepaired(10);
	scavtrap1.printStatus();
	scavtrap2.printStatus();
	scavtrap1.guardGate();
	scavtrap2.guardGate();
	scavtrap1.printStatus();
	scavtrap2.printStatus();
	return (0);
}