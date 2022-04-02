#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie* zombies = new Zombie[N];

	while (i < N)
	{
		zombies[i].setName(name + std::to_string(i));
		i++;
	}
	return (zombies);
}
