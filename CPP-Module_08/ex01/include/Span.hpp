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

		template<typename T>
		void addNumbers(T start_it, T end_it)
		{
			if (start_it > end_it)
				throw InvalidRangeOfIteratorException();
			ptrdiff_t size = end_it - start_it;
			if (static_cast<unsigned int>(size) > this->size_ - v_.size())
				throw NotEnoughSizeLeftException();
			v_.insert(v_.end(), start_it, end_it);
		}

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

	class NotEnoughSizeLeftException : public std::exception
	{
		const char* what() const throw();
	};

	class InvalidRangeOfIteratorException : public std::exception
	{
		const char* what() const throw();
	};
};

#endif
