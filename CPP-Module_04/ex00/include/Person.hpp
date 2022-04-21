#ifndef PERSON_HPP
# define PERSON_HPP

# include <iostream>

class Person
{
	private:

	protected:

	public:
	Person();
	Person(const Person& person);
	~Person();

	Person& operator=(const Person& person);
};

#endif
