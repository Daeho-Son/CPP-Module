#ifndef STUDENT_HPP
# define STUDENT_HPP

# include "Person.hpp"

class Student : public Person
{
	private:

	protected:

	public:
		Student();
		Student(const Student& student);
		~Student();

		Student& operator=(const Student& student);
};

#endif
