#include "../include/Zombie.hpp"

int main(void)
{
	Zombie* zombies;
	int N = 10;

	zombies = zombieHorde(N, "zombie");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}