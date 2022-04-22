#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap1("claptrap 1");
	ClapTrap claptrap2("claptrap 2");

	claptrap1.printStatus();
	claptrap2.printStatus();
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.printStatus();
	claptrap2.printStatus();
	claptrap2.beRepaired(1);
	claptrap1.printStatus();
	claptrap2.printStatus();
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.attack("claptrap 2");
	claptrap2.takeDamage(claptrap1.getAttakDamage());
	claptrap1.printStatus();
	claptrap2.printStatus();
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);
	return (0);
}