#include "../include/Zombie.hpp"

int main(void)
{
	Zombie* zombies;
	int i = 0;

	zombies = zombieHorde(10, "zombie");
	while (i < 10)
	{
		zombies[i++].announce();
	}
	delete[] zombies;
	return (0);
}