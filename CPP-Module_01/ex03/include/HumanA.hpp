#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	private:
		const Weapon& weapon_;
		std::string name_;

	public:
		HumanA(std::string name, const Weapon& weapon);
		~HumanA();
		void attack();
};

#endif
