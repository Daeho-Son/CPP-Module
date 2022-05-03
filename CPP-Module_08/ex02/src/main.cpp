#include "MutantStack.hpp"
#include <iostream>

int main(void)
{
	std::cout << "===== iterator =====" << std::endl;
	{
		MutantStack<int> m_stack;
		m_stack.push(1);
		m_stack.push(3);
		m_stack.push(5);
		std::cout << "# non-const" << std::endl;
		for (MutantStack<int>::iterator it = m_stack.begin(); it != m_stack.end(); it++)
		{
			// *it = 100;
			std::cout << *it << std::endl;
		}
	}
	std::cout << std::endl;
	{
		MutantStack<int> m_stack;
		m_stack.push(1);
		m_stack.push(3);
		m_stack.push(5);
		std::cout << "# const" << std::endl;
		for (MutantStack<int>::const_iterator c_it = m_stack.begin(); c_it != m_stack.end(); c_it++)
		{
			// *c_it = 100;
			std::cout << *c_it << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	std::cout << "===== reverse_iterator =====" << std::endl;
	{
		MutantStack<int> m_stack;
		m_stack.push(2);
		m_stack.push(4);
		m_stack.push(6);
		std::cout << "# non-const" << std::endl;
		for (MutantStack<int>::reverse_iterator r_it = m_stack.rbegin(); r_it != m_stack.rend(); r_it++)
		{
			// *r_it = 100;
			std::cout << *r_it << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "===== reverse_iterator =====" << std::endl;
		MutantStack<int> m_stack;
		m_stack.push(2);
		m_stack.push(4);
		m_stack.push(6);
		std::cout << "# const" << std::endl;
		for (MutantStack<int>::const_reverse_iterator cr_it = m_stack.rbegin(); cr_it !=m_stack.rend(); cr_it++)
		{
			// *cr_it = 100;
			std::cout << *cr_it << std::endl;
		}
	}
	return (0);
}