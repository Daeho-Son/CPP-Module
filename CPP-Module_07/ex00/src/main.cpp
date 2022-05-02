#include "whatever.hpp"
#include <iostream>

int main(void)
{
	{
		std::cout << "===== subject 테스트 =====" << std::endl;
		int a = 2;
		int b = 3;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "swap" << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== int 테스트 =====" << std::endl;
		int x = 10;
		int y = 5;

		std::cout << "x: " << x << "\ty: " << y << std::endl;
		std::cout << "swap" << std::endl;
		swap(x, y);
		std::cout << "x: " << x << "\ty: " << y << std::endl;
		std::cout << "min: " << min(x, y) << std::endl;
		std::cout << "max: " << max(x, y) << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== char 테스트 =====" << std::endl;
		char a = 'a';
		char b = 'b';

		std::cout << "a: " << a << "\tb: " << b << std::endl;
		std::cout << "swap" << std::endl;
		swap(a, b);
		std::cout << "a: " << a << "\tb: " << b << std::endl;
		std::cout << "min: " << min(a, b) << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== float 테스트 =====" << std::endl;
		float x = 0.01f;
		float y = 0.05f;

		std::cout << "x: " << x << "\ty: " << y << std::endl;
		std::cout << "swap" << std::endl;
		swap(x, y);
		std::cout << "x: " << x << "\ty: " << y << std::endl;
		std::cout << "min: " << min(x, y) << std::endl;
		std::cout << "max: " << max(x, y) << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "===== double 테스트 =====" << std::endl;
		double x = 0.3;
		double y = 0.6;

		std::cout << "x: " << x << "\ty: " << y << std::endl;
		std::cout << "swap" << std::endl;
		swap(x, y);
		std::cout << "x: " << x << "\ty: " << y << std::endl;
		std::cout << "min: " << min(x, y) << std::endl;
		std::cout << "max: " << max(x, y) << std::endl;
	}
	return (0);
}