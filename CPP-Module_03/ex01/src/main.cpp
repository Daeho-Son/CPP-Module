#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavtrap1("scavtrap 1");
	ScavTrap scavtrap2("scavtrap 2");

	scavtrap1.printStatus();
	scavtrap2.printStatus();

	std::cout << "\n========== ScavTrap 1 Attack()으로 에너지 소비" << std::endl;
	for (int i = 0; i < 50; i++)
	{
		std::cout << "i: " << i + 1 << std::endl;
		scavtrap1.attack("scavtrap 2");
		scavtrap2.takeDamage(scavtrap1.getAttakDamage());
	}
	scavtrap1.attack("scavtrap 2");
	scavtrap1.beRepaired(10);
	scavtrap2.attack("scavtrap 2");
	scavtrap2.beRepaired(10);
	scavtrap1.printStatus();
	scavtrap2.printStatus();

	std::cout << "\n========== ScavTrap 1과 ScavTrap 2를 guardGate() ==========" << std::endl;
	scavtrap1.guardGate();
	scavtrap2.guardGate();
	scavtrap1.printStatus();
	scavtrap2.printStatus();
	return (0);
}