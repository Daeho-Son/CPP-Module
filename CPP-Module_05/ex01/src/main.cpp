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
		std::cout << "===== catch case =====" << std::endl;
		std::cout << "# case 1" << std::endl;
		try
		{
			Bureaucrat bu = Bureaucrat("bu", -1);
			std::cout << bu << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << "# case 1" << std::endl;
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
		Bureaucrat* bu_ptr;
		try
		{
			bu_ptr = new Bureaucrat("bu_ptr", 150);
			std::cout << *bu_ptr << std::endl;
			bu_ptr->downGrade();
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << *bu_ptr << std::endl;
		delete bu_ptr;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== upGrade() 테스트 =====" << std::endl;
		Bureaucrat* bu_ptr;
		try
		{
			bu_ptr = new Bureaucrat("bu_ptr", 1);
			std::cout << *bu_ptr << std::endl;
			bu_ptr->upGrade();
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << *bu_ptr << std::endl;
		delete bu_ptr;
	}
	return (0);
}