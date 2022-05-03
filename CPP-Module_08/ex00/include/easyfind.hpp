#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>

class OutOfRangeException : public std::exception
{
	const char* what() const throw()
	{
		return ("::OutOfRangeException()");
	}
};

template<typename T>
typename T::iterator easyfind(T& t, int x)
{
	for (typename T::iterator it = t.begin(); it != t.end(); it++)
	{
		if (*it == x)
			return (it);
	}
	throw OutOfRangeException();
}

template<typename T>
typename T::const_iterator easyfind(const T& t, int x)
{
	for (typename T::const_iterator it = t.begin(); it != t.end(); it++)
	{
		if (*it == x)
			return (it);
	}
	throw OutOfRangeException();
}

#endif