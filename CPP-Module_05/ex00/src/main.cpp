#include "Bureaucrat.hpp"

int main(void)
{
	{
		std::cout << "===== Non catch case =====" << std::endl;
		try
		{
			Bureaucrat bu1("bu1", 150);
			std::cout << bu1 << std::endl;
			Bureaucrat bu2("bu2", 1);
			std::cout << bu2 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== KO Case =====" << std::endl;
		std::cout << "KO: 0 grade" << std::endl;
		try
		{
			Bureaucrat bu = Bureaucrat("bu", 0);
			std::cout << bu << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << "KO: 151 grade" << std::endl;
		try
		{
			Bureaucrat bu = Bureaucrat("bu", 151);
			std::cout << bu << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== downGrade() 테스트 =====" << std::endl;
		try
		{
			Bureaucrat b150 = Bureaucrat("b150", 150);
			std::cout << b150 << std::endl;
			b150.downGrade();
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== upGrade() 테스트 =====" << std::endl;
		try
		{
			Bureaucrat b1 = Bureaucrat("bu_ptr", 1);
			std::cout << b1 << std::endl;
			b1.upGrade();
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	return (0);
}