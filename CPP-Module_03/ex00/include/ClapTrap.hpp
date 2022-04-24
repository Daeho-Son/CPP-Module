#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string name_;
		unsigned int hit_points_;
		unsigned int energy_points_;
		unsigned int attack_damage_;
		unsigned int max_hp_;
		bool is_stuck_;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& claptrap);
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap& claptrap);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getAttakDamage() const;
		void printStatus();
};

#endif