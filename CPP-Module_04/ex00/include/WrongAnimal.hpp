#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string type_;

	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& wronganimal);
	~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& wronganimal);

	void makeSound() const;
	std::string getType() const;
};

#endif
