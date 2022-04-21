#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << "# Good Case" << std::endl;
		const Animal *animal = new Animal();
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();

		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound(); //will output the cat sound!
		dog->makeSound();
		animal->makeSound();

		delete animal;
		delete dog;
		delete cat;
	}
	std::cout << std::endl;
	{
		std::cout << "# Wrong Case" << std::endl;
		const WrongAnimal* wrong_animal = new WrongAnimal();
		const WrongAnimal* wrong_cat = new WrongCat();

		std::cout << wrong_animal->getType() << std::endl;
		std::cout << wrong_cat->getType() << std::endl;

		wrong_animal->makeSound();
		wrong_cat->makeSound();

		delete wrong_animal;
		delete wrong_cat;
	}
	return (0);
}