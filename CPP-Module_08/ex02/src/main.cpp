#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main(void)
{
	std::cout << "===== Subject Test 1 =====" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl << std::endl;
	std::cout << "===== iterator Test =====" << std::endl;
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
	std::cout << "===== reverse_iterator Test =====" << std::endl;
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