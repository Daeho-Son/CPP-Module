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
		Dog *d1 = new Dog();
		Dog *d2;	
		std::string* ideaptr = d1->getBrain()->getIdea();
		ideaptr[0] = "Hello, world";
		d2 = d1;
		delete d1;
		ideaptr = d2->getBrain()->getIdea();
		std::cout << "test: " << ideaptr[0] << std::endl;
		// TODO: d2의 데이터도 사라짐.. :(
	}
	return 0;
}