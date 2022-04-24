#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string* idea_;

	public:
		Brain();
		Brain(const Brain& brain);
		~Brain();

		Brain &operator=(const Brain &brain);

		std::string* getIdea() const;
};

#endif
