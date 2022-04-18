#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
	private:
		bool gate_keeper_mode_;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& scavtrap);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap& scavtrap);

		void attack(const std::string& target);
		void guardGate();
		void printStatus();
};

#endif