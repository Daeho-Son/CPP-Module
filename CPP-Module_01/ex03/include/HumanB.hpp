#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	private:
		const Weapon* weapon_;
		std::string name_;
	
	public:
		HumanB(std::string name);
		~HumanB(); 
		
		void setWeapon(const Weapon& weapon);
		void attack();
};

#endif