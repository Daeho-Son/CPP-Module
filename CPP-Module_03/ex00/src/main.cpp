#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap1("claptrap 1");
	ClapTrap claptrap2("claptrap 2");

	claptrap1.printStatus();
	claptrap2.printStatus();
	std::cout << "========== claptrap 1 Attack()으로 에너지 소비 ==========" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "i: " << i + 1 << std::endl;	
		claptrap1.attack("claptrap 2");
		claptrap2.takeDamage(claptrap1.getAttakDamage());
		claptrap1.printStatus();
	}

	std::cout << "# claptrap 1 stuck 확인" << std::endl;
	claptrap1.attack("claptrap 2");
	claptrap1.beRepaired(1);
	std::cout << "\n========== claptrap 2 beRepaired()로 에너지 소비 ==========" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "i: " << i + 1<< std::endl;
		claptrap2.beRepaired(1);
		claptrap2.printStatus();
	}
	std::cout << "# claptrap 2 stuck 확인" << std::endl;
	claptrap2.attack("claptrap 1");
	claptrap2.beRepaired(1);
	return (0);
}