#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type_;

	protected:

	public:
		Animal();
		Animal(const Animal &animal);
		virtual ~Animal();

		Animal &operator=(const Animal &animal);

		virtual void makeSound() const;
		std::string getType() const;
		void setType(std::string type);
};

#endif
