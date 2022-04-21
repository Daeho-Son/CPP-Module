#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	protected:

	public:
		WrongCat();
		WrongCat(const WrongCat& wrongcat);
		~WrongCat();

		WrongCat& operator=(const WrongCat& wrongcat);

		void makeSound() const;
};

#endif
