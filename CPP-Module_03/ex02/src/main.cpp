#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragtrap1("fragtrap 1");
	FragTrap fragtrap2("fragtrap 2");
	
	fragtrap1.printStatus();
	fragtrap2.printStatus();
	for (int i = 0; i < 100; i++)
	{
		std::cout << "i: " << i + 1 << std::endl;
		fragtrap1.attack("fragtrap 2");
		fragtrap2.takeDamage(fragtrap1.getAttakDamage());
		std::cout << std::endl;
	}
	fragtrap1.printStatus();
	fragtrap2.printStatus();
	fragtrap1.attack("fragtrap 2");
	fragtrap1.beRepaired(1);
	fragtrap2.attack("fragtrap 1");
	fragtrap2.beRepaired(1);
	std::cout << "\n========= fragtrap 1과 fragtrap 2의 highFivesGuys() ==========" << std::endl;
	fragtrap1.highFivesGuys();
	fragtrap2.highFivesGuys();
	return (0);
}