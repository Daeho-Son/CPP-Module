#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	{
		// Animal animal; // 객체화
		Dog dog;
		Cat cat;

		dog.makeSound();
		cat.makeSound();
		
	}
	return (0);
}