#include "Converter.hpp"

Converter::Converter()
{
	// std::cout << "Converter 기본 생성자 호출" << std::endl;
	base_ = 0;
}

Converter::Converter(char* c)
{
	// std::cout << "Converter 생성자(char*) 호출" << std::endl;
	char* str_end;
	base_ = strtod(c, &str_end);
	if (std::strlen(c) == 1 && base_ == 0 && c[0] != '0')
	{
		base_ = static_cast<double>(c[0]);
	}
	else
	{
		if (*str_end != '\0' && *str_end != 'f')
			throw(ConstructorErrorException());
		if (*str_end == 'f' && *(str_end + 1) != '\0')
			throw(ConstructorErrorException());
	}
}

Converter::Converter(const Converter& converter)
{
	// std::cout << "Converter 복사 생성자 호출" << std::endl;
	base_ = converter.base_;
}

Converter::~Converter()
{
	// std::cout << "Converter 소멸자 호출" << std::endl;
}

Converter& Converter::operator=(const Converter& converter)
{
	// std::cout << "Converter 할당 연산자 오버로딩" << std::endl;
	base_ = converter.base_;
	return (*this);
}

char Converter::toChar()
{
	int temp = static_cast<int>(base_);

	if (!(0 <= temp && temp <= 127))
		throw CharImpossibleException();
	else if (0 <= temp && temp <= 31)
		throw CharNonDisplayableException();
	return (temp);
}

int Converter::toInt()
{
	if (base_ != base_)
		throw IntImpossibleException();
	if (base_ < -2147483648.0 || 2147483647.0 < base_)
		throw IntImpossibleException();
	int temp = static_cast<int>(base_);
	return (temp);
}

float Converter::toFloat()
{
	float temp = static_cast<float>(base_);
	return (temp);
}

double Converter::toDouble()
{
	return (base_);
}

void Converter::Print()
{
	// char
	try
	{
		std::cout << "char: ";
		char c = toChar();
		std::cout << "'" << c << "'" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// int
	int i = 0;
	try
	{
		std::cout << "int: ";
		i = toInt();
		std::cout << i << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// float
	float f = toFloat();
	std::cout << "float: ";
	if (f - i != 0)
		std::cout << f << "f" << std::endl;
	else
		std::cout << f << ".0f" << std::endl;

	// double
	double d = toDouble();
	std::cout << "double: ";
	if (d - i != 0)
		std::cout << d << std::endl;
	else
		std::cout << d << ".0" << std::endl;
}

const char* Converter::ConstructorErrorException::what() const throw()
{
	return ("생성자 생성에 실패했습니다.");
}

const char* Converter::CharNonDisplayableException::what() const throw()
{
	return ("Non displayable");
}

const char* Converter::CharImpossibleException::what() const throw()
{
	return ("impossible");
}

const char* Converter::IntImpossibleException::what() const throw()
{
	return ("impossible");
}