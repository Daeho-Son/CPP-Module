#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		std::cout << "# Subject Test" << std::endl;
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		delete j; //should not create a leak
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "# Test 1" << std::endl;
		Dog d1;
		Dog d2;

		std::cout << "[1] d1: " << d1.getBrain()->getIdea()[0] << std::endl;
		std::cout << "[1] d2: " << d2.getBrain()->getIdea()[0] << std::endl;
		d1.getBrain()->getIdea()[0] = "Hello, World";
		std::cout << "[2] d1: " << d1.getBrain()->getIdea()[0] << std::endl;
		std::cout << "[2] d2: " << d2.getBrain()->getIdea()[0] << std::endl;
		d2.removeBrain();
		std::cout << "[3] d1: " << d1.getBrain()->getIdea()[0] << std::endl;
		std::cout << "[3] d2: " << d2.getBrain()->getIdea()[0] << std::endl;
		d2 = d1;
		std::cout << "[4] d1: " << d1.getBrain()->getIdea()[0] << std::endl;
		std::cout << "[4] d2: " << d2.getBrain()->getIdea()[0] << std::endl;
		d1.removeBrain();
		d2.removeBrain();
	}
	return 0;
}