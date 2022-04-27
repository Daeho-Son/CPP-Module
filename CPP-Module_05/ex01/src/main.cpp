#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat b1("b1", 130);
	Bureaucrat b2("b1", 1);
	Form form;

	std::cout << b1 << std::endl;
	b1.signForm(form);
	b2.signForm(form);
	return (0);
}