#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main(void)
{
	std::vector<int> v;
	for (int i = 0; i < 5; i++)
	{
		v.push_back(i);
	}

	std::cout << "===== vector 테스트 =====" << std::endl;
	{
		std::cout << "# non-const" << std::endl;
		try
		{
			std::cout << "*easyfind(v, 3): " << *easyfind(v, 3) << std::endl;
			std::cout << "*easyfind(v, 4): " << *easyfind(v, 4) << std::endl;
			std::cout << "*easyfind(v, -1): " << *easyfind(v, -1) << std::endl;
			// std::cout << "*easyfind(v, 5): " << *easyfind(v, 5) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "# const" << std::endl;
		const std::vector<int> const_v(v);

		try
		{
			std::cout << "*easyfind(const_v, 3): " << *easyfind(const_v, 3) << std::endl;
			std::cout << "*easyfind(const_v, -1): " << *easyfind(const_v, -1) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	std::cout << "===== list 테스트 =====" << std::endl;
	std::list<int> l;
	for (int i = 0; i < 5; i++)
	{
		l.push_back(i);
	}

	{
		std::cout << "# non-const" << std::endl;
		try
		{
			std::cout << "*easyfind(l, 2): " << *easyfind(l, 2) << std::endl;
			std::cout << "*easyfind(l, 5): " << *easyfind(l, 5) << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "# const" << std::endl;
		const std::list<int> const_l(l);
		try
		{
			std::cout << "*easyfind(const_l, 2): " << *easyfind(l, 2) << std::endl;
			std::cout << "*easyfind(const_l, 5): " << *easyfind(l, 5) << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

	}
	return (0);
}