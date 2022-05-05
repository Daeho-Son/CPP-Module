#include "Span.hpp"
#include <vector>

int main(void)
{
	{
		std::cout << "===== Subject Test =====" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.printData();
		std::cout << "shortestSpan(): " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan(): " << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Test 1: 양수 값 =====" << std::endl;
		Span span(10);

		int gap = 0;
		try
		{
			for (int i = 0; i < 10; i++)
			{
				span.addNumber(i * gap);
				gap++;
			}
			std::cout << "# span.printData()" << std::endl;
			span.printData();
			std::cout << "shortestSpan(): " << span.shortestSpan() << std::endl;
			std::cout << "longestSpan(): " << span.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Test 2: 음수 값 =====" << std::endl;
		Span span(10);

		int gap = 0;
		try
		{
			for (int i = 0; i < 10; i++)
			{
				span.addNumber(i * gap);
				gap--;
			}
			std::cout << "# span.printData()" << std::endl;
			span.printData();
			std::cout << "shortestSpan(): " << span.shortestSpan() << std::endl;
			std::cout << "longestSpan(): " << span.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Test 3: size가 10000 =====" << std::endl;
		Span span(10000);

		int gap = 0;
		try
		{
			for (int i = 0; i < 10000; i++)
			{
				span.addNumber(i * gap);
				gap++;
			}
			std::cout << "# span.printData()" << std::endl;
			// span.printData();
			std::cout << "shortestSpan(): " << span.shortestSpan() << std::endl;
			std::cout << "longestSpan(): " << span.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Test 4: FullSizeException() =====" << std::endl;
		Span span2(0);
		try
		{
			span2.addNumber(1);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Test 5: FewSizeException()=====" << std::endl;
		Span span(5);

		try
		{
			span.addNumber(1);
			std::cout << "shortestSpan(): " << span.shortestSpan() << std::endl;
			std::cout << "longestSpan(): " << span.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Test 6: EmptySizeException() =====" << std::endl;
		Span span_1(1);
		try
		{
			std::cout << "shortestSpan(): " << span_1.shortestSpan() << std::endl;
			std::cout << "longestSpan(): " << span_1.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

		Span span_0(0);
		try
		{
			std::cout << "shortestSpan(): " << span_0.shortestSpan() << std::endl;
			std::cout << "longestSpan(): " << span_0.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Test 7: addNumbers() - NotEnoughSizeLeftException() =====" << std::endl;
		std::vector<int> v;
		for (int i = 0; i < 10001; i++)
		{
			v.push_back(i);
		}
		Span span(10000);
		try
		{
			// span.addNumbers(v);
			// span.printData();
			std::cout << "shortestSpan(): " << span.shortestSpan() << std::endl;
			std::cout << "longestSpan(): " << span.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Test 8: addNumbers() =====" << std::endl;
		std::vector<int> v;
		for (int i = 0; i < 10000; i++)
		{
			v.push_back(i);
		}
		Span span(10000);
		try
		{
			std::cout << "*(v.end() - 1): " << *(v.end() - 1) << std::endl;
			std::cout << "*v.end(): " << *v.end() << std::endl;
			span.addNumbers(v.begin(), v.end());
			span.printData();
			std::cout << "shortestSpan(): " << span.shortestSpan() << std::endl;
			std::cout << "longestSpan(): " << span.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}