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

// TODO: find()로 수정해서 재구현
template<typename T>
typename T::iterator easyfind(T& container, int x)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), x);
	if (it == container.end())
		throw OutOfRangeException();
	return (it);
}

// TODO: find()로 수정해서 재구현
template<typename T>
typename T::const_iterator easyfind(const T& container, int x)
{
	typename T::const_iterator c_it;

	c_it = std::find(container.begin(), container.end(), x);
	if (c_it == container.end())
		throw OutOfRangeException();
	return (c_it);
}

#endif
