#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		unsigned int size_;
		std::vector<int> v_;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span& span);
		~Span();

		Span& operator=(const Span& span);

		void addNumber(int x);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void printData() const;

	class FullSizeException : public std::exception
	{
		const char *what() const throw();
	};

	class FewSizeException : public std::exception
	{
		const char* what() const throw();
	};

	class EmptySizeException : public std::exception
	{
		const char* what() const throw();
	};
};

#endif
