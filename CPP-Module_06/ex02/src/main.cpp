#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	if (random == 0)
	{
		Base *b_a = new A();
		return (b_a);
	}
	else if (random == 1)
	{
		Base *b_b = new B();
		return (b_b);
	}
	else if (random == 2)
	{
		Base *b_c = new C();
		return (b_c);
	}
	return (NULL);
}

void identify(Base* p)
{
	
	if (dynamic_cast<A *>(p) != NULL)
	{
		std::cout << "A" << std::endl;
	}
	else if(dynamic_cast<B *>(p) != NULL)
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C *>(p) != NULL)
	{
		std::cout << "C" << std::endl;
	}
	else
	{
		std::cout << "None" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		A& a_ref = dynamic_cast<A&>(p);
		std::cout << "A: " << &a_ref << std::endl;
		return ;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		B& b_ref = dynamic_cast<B&>(p);
		std::cout << "B: " << &b_ref << std::endl;
		return ;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		C& c_ref = dynamic_cast<C&>(p);
		std::cout << "C: " << &c_ref << std::endl;
		return ;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "None" << std::endl;
}

int main(void)
{
	Base *b_ptr;
	std::cout << "포인터로 받았을 때 identify()" << std::endl;
	b_ptr = generate();
	identify(b_ptr);
	std::cout << std::endl;

	std::cout << "레퍼런스로 값을 받았을 때 identify()" << std::endl;
	Base& b_a = *b_ptr;
	identify(b_a);

	if (b_ptr != NULL)
		delete b_ptr;
}