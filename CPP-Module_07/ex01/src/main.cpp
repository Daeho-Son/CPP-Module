#include <iostream>
#include "iter.hpp"

class Awesome
{
public:
	Awesome(void) : _n(42) { return; }
	int get(void) const { return this->_n; }

private:
	int _n;
};
std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return o;
}

int main(void)
{
	{
		std::cout << "===== int =====" << std::endl;
		int i[5] = {1, 2, 3, 4, 5};
		std::cout << "# print()" << std::endl;
		iter(i, 5, print);
		std::cout << "# plus_one()" << std::endl;
		iter(i, 5, plus_one);
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== char =====" << std::endl;
		char c[5] = {'a', 'b', 'c', 'd', 'e'};
		std::cout << "# print()" << std::endl;
		iter(c, 5, print);
		std::cout << "# plus_one()" << std::endl;
		iter(c, 5, plus_one);
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== float =====" << std::endl;
		float f[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
		std::cout << "# print()" << std::endl;
		iter(f, 5, print);
		std::cout << "# plus_one()" << std::endl;
		iter(f, 5, plus_one);
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== double =====" << std::endl;
		double d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
		std::cout << "# print()" << std::endl;
		iter(d, 5, print);
		std::cout << "# plus_one()" << std::endl;
		iter(d, 5, plus_one);
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Last Test =====" << std::endl;
		int tab[] = {0, 1, 2, 3, 4}; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
		Awesome tab2[5];
		iter(tab, 5, print);
		iter(tab2, 5, print);
	}
	return (0);
}