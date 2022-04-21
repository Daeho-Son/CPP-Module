#include "Student.hpp"

Student::Student() : Person()
{
	std::cout << "Student 기본 생성자 호출" << std::endl;
}

Student::Student(const Student& student) : Person(student)
{
	std::cout << "Student 복사 생성자 호출" << std::endl;
}

Student::~Student()
{
	std::cout << "Student 소멸자 호출" << std::endl;
}

Student& Student::operator=(const Student& student)
{
	std::cout << "Student 할당 연산자 오버로딩" << std::endl;
	Person::operator=(student);
	return (*this);
}
