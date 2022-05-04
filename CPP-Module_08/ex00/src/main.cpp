#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>


int main(void)
{
	{
		std::cout << "===== vector 테스트 =====" << std::endl;
		std::vector<int> v;
		for (int i = 0; i < 5; i++)
		{
			v.push_back(i);
		}

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
	}
	std::cout << std::endl << std::endl;
	{
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
			catch (std::exception &e)
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
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== deque 테스트 =====" << std::endl;
		std::deque<int> d;
		for (int i = 0; i < 5; i++)
		{
			d.push_back(i);
		}
		{
			std::cout << "# non-const" << std::endl;
			try
			{
				std::cout << "*easyfind(d, 2): " << *easyfind(d, 2) << std::endl;
				std::cout << "*easyfind(d, 5): " << *easyfind(d, 5) << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
		std::cout << std::endl;
		{
			std::cout << "# const" << std::endl;
			const std::deque<int> const_d(d);
			try
			{
				std::cout << "*easyfind(const_d, 2): " << *easyfind(const_d, 2) << std::endl;
				std::cout << "*easyfind(const_d, 5): " << *easyfind(const_d, 5) << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== forward_list 테스트 =====" << std::endl;
		std::forward_list<int> fl;
		for (int i = 0; i < 5; i++)
		{
			fl.push_front(i);
		}
		{
			std::cout << "# non-const" << std::endl;
			try
			{
				std::cout << "*easyfind(fl, 2): " << *easyfind(fl, 2) << std::endl;
				std::cout << "*easyfind(fl, 5): " << *easyfind(fl, 5) << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
		std::cout << std::endl;
		{
			std::cout << "# const" << std::endl;
			const std::forward_list<int> const_fl(fl);
			try
			{
				std::cout << "*easyfind(const_fl, 2): " << *easyfind(const_fl, 2) << std::endl;
				std::cout << "*easyfind(const_fl, 5): " << *easyfind(const_fl, 5) << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}

	return (0);
}