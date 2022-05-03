#include "Span.hpp"

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
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
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
			std::cout << span.shortestSpan() << std::endl;
			std::cout << span.longestSpan() << std::endl;
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
			std::cout << span.shortestSpan() << std::endl;
			std::cout << span.longestSpan() << std::endl;
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
			std::cout << span.shortestSpan() << std::endl;
			std::cout << span.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Test 4: FullSizeException() =====" << std::endl;
		Span span1(5);
		try
		{
			for (int i = 0; i < 6; i++)
			{
				span1.addNumber(i);
			}
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

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
			for (int i = 0; i < 1; i++)
			{
				span.addNumber(i);
			}
			span.longestSpan();
			// span.shortestSpan();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== Test 6: EmptySizeException() =====" << std::endl;
		Span span(1);

		try
		{
			span.longestSpan();
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

	}
	return (0);
}