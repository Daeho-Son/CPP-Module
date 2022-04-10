#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string name_;
		int hit_points_;
		int energy_points_;
		int attack_damage_;

	public:
		ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif