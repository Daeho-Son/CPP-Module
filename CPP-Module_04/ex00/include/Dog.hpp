#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:

	protected:

	public:
		Dog();
		Dog(const Dog& dog);
		~Dog();

		Dog& operator=(const Dog& dog);

		void makeSound() const;
};

#endif