#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class Form;
class Intern
{
	public:
		Intern();
		Intern(const Intern& intern);
		~Intern();

		Intern& operator=(const Intern& intern);

		Form* makeForm(std::string name, std::string target);
};

#endif
