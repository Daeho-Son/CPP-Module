#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat b128("b128", 128);
	Bureaucrat b1("b1", 1);
	Form form("form", 127, 2);

	std::cout << b1 << std::endl;
	b128.signForm(form);
	b1.signForm(form);
	b1.signForm(form);
	return (0);
}