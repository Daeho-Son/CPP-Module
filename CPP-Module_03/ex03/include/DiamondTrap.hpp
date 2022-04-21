#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name_;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& diamondtrap);
		~DiamondTrap();

		DiamondTrap& operator=(const DiamondTrap& diamondtrap);
		int getAttackDamage()
		{
			return (FragTrap::getAttakDamage());
		}
		std::string getName()
		{
			return (name_);
		}
};

#endif