#include "Span.hpp"

Span::Span()
{
	std::cout << "Span 기본 생성자 호출" << std::endl;
	size_ = 0;
}

Span::Span(unsigned int n)
{
	std::cout << "Span 생성자(unsigned int) 호출" << std::endl;
	size_ = n;
}

Span::Span(const Span& span)
{
	std::cout << "Span 복사 생성자 호출" << std::endl;
	size_ = span.size_;
	v_ = span.v_;
}

Span::~Span()
{
	std::cout << "Span 소멸자 호출" << std::endl;
}

Span& Span::operator=(const Span& span)
{
	std::cout << "Span 할당 연산자 오버로딩" << std::endl;
	size_ = span.size_;
	v_ = span.v_;
	return (*this);
} 

void Span::addNumber(int x)
{
	if (v_.size() == size_)
		throw FullSizeException();
	v_.push_back(x);
}

unsigned int Span::shortestSpan()
{
	if (v_.size() == 0)
		throw EmptySizeException();
	if (v_.size() == 1)
		throw FewSizeException();
	sort(v_.begin(), v_.end());
	unsigned int shortest = UINT_MAX;
	for (unsigned int i = 0; i < v_.size() - 1; i++)
	{
		shortest = std::min(shortest, static_cast<unsigned int>(v_[i + 1] - v_[i]));
	}
	return (shortest);
}

unsigned int Span::longestSpan()
{
	if (v_.size() == 0)
		throw EmptySizeException();
	if (v_.size() == 1)
		throw FewSizeException();
	sort(v_.begin(), v_.end());
	return (static_cast<unsigned int>(*(v_.end() - 1) - *(v_.begin())));
}

void Span::printData() const
{
	for (size_t i = 0; i < v_.size(); i++)
	{
		std::cout << v_[i] << " ";
	}
	std::cout << std::endl;
}

const char* Span::FullSizeException::what() const throw()
{
	return ("Span::FullSizeException()");
}

const char* Span::FewSizeException::what() const throw()
{
	return ("Span::FewSizeException()");
}

const char* Span::EmptySizeException::what() const throw()
{
	return ("Span::EmptySizeException()");
}

const char* Span::NotEnoughSizeLeftException::what() const throw()
{
	return ("Span::NotEnoughSizeLeftException()");
}