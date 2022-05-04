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


		// TODO: size를 비교해서 size가 충분하지 않으면 throw, size가 충분하면 v_.insert(v_.end(), container.begin(), container.end()) 로 추가
		// TODO: vector - insert 함수 공부
		template<typename T>
		void addNumbers(T& container)
		{
			try
			{
				for (typename T::iterator it = container.begin(); it != container.end(); it++)
				{
					addNumber(*it);
				}
			}
			catch (std::exception& e)
			{
				std::cout << "남은 공간이 없습니다. " << e.what() << std::endl;
			}
		}

		template<typename T>
		void addNumbers(const T& container)
		{
			try
			{
				for (typename T::const_iterator c_it = container.begin(); c_it != container.end(); c_it++)
				{
					addNumber(*c_it);
				}
			}
			catch (std::exception& e)
			{
				std::cout << "남은 공간이 없습니다. " << e.what() << std::endl;
			}
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
};

#endif
